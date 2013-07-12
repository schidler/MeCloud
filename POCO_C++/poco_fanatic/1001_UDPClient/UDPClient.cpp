#include "Poco/Net/DatagramSocket.h"
#include "Poco/Net/IPAddress.h"
#include "Poco/String.h"
#include "Poco/Format.h"
#include "Poco/Exception.h"
#include "Poco/Data/Common.h"
#include "Poco/Data/BLOB.h"
#include "Poco/Data/StatementImpl.h"
#include <Poco/Data/RecordSet.h>
#include "Poco/Data/MySQL/Connector.h"
#include "Poco/Data/MySQL/MySQLException.h" 
#include <iostream>
#include <stdio.h>
using namespace std;

using namespace Poco::Data; 
using Poco::Data::MySQL::ConnectionException;
using Poco::Data::MySQL::StatementException;
using Poco::format;
using Poco::NotFoundException;
using Poco::Exception;
using Poco::Net::DatagramSocket;
using Poco::Net::IPAddress;

Poco::SharedPtr<Poco::Data::Session> _pSession = 0;   

#define UDP_PORT 8888

std::string _dbConnString = "host=hsworkapp.mysql.rds.aliyuncs.com;user=hswork_ue;password=hswork_ue;db=hswork_ue;compress=true;auto-reconnect=true";

#define ISSPACE(x) ((x)==' '||(x)=='\r'||(x)=='\n'||(x)=='\f'||(x)=='\b'||(x)=='\t')

char *trim( char *szInput )
{
    char *Tail, *Head;

    for ( Tail = szInput + strlen( szInput ) - 1; Tail >= szInput; Tail -- )
    {
        if ( !ISSPACE( *Tail ) )
        {
            break;
        }
    }
    Tail[1] = 0;

    for ( Head = szInput; Head <= Tail; Head ++ )
    {
        if ( !ISSPACE( *Head ) )
        {
            break;
        }
    }
    if ( Head != szInput )
    {
        memcpy( szInput, Head, ( Tail - Head + 2 ) * sizeof( char ) );
    }

    return szInput;
}

void writeToDB(const char* buffer, string& sql){
    char szVersion[20]={0};
    char szImei[20]={0};
    char szSn[20]={0};
    char szDdate[50]={0};
    char szAuth[50]={0};
    char szFlag[2]={0};
    char szMsg[512]={0};
	memset(szVersion,0x00,sizeof(szVersion));
	memset(szImei,0x00,sizeof(szImei));
	memset(szSn,0x00,sizeof(szSn));
	memset(szDdate,0x00,sizeof(szDdate));
	memset(szAuth,0x00,sizeof(szAuth));
	memset(szFlag,0x00,sizeof(szFlag));
	memset(szMsg,0x00,sizeof(szMsg));

	sscanf(buffer,"%[^|]|%[^|]|%[^|]|%[^|]|%[^|]|%s",szVersion,szImei,szSn,szDdate,szAuth,szFlag);
	sql = "insert into ue_update_report (version,imei,sn,ddate,auth,flag) values ('";
	sql += trim(szVersion); sql +="','";
	sql += trim(szImei); sql +="','";
	sql += trim(szSn); sql +="','";
	sql += trim(szDdate); sql +="','";
	sql += trim(szAuth); sql +="','";
	sql += trim(szFlag); sql +="');";
}

void writeToDB2(const char* buffer, string& sql){
    char szImei[20]={0};
    char szFlashIdMd5[50]={0};
    char szDdate[50]={0};
    char szFlag[2]={0};
        memset(szFlashIdMd5,0x00,sizeof(szFlashIdMd5));
        memset(szImei,0x00,sizeof(szImei));
	memset(szDdate,0x00,sizeof(szDdate));
	memset(szFlag,0x00,sizeof(szFlag));

        sscanf(buffer,"%[^|]|%[^|]|%[^|]|%s",szFlashIdMd5,szImei,szDdate,szFlag);
        sql = "insert into hswork_deviceauth_report (imei,flash_id_md5) values ('";
        sql += trim(szImei); sql +="','";
        sql += trim(szFlashIdMd5); sql +="');";
}


int main(int argc, char**argv)
{
	char sendline[1000];

	if (argc != 3)
	{
		printf("usage:  udpcli <IP address> <Port>\n");
		exit(1);
	}

	DatagramSocket ss;
	Poco::Net::SocketAddress socketAddress(argv[1], atoi(argv[2]));
	ss.connect(socketAddress);

	while (fgets(sendline, 256, stdin) != NULL)
	{
		int n = ss.sendBytes(sendline,strlen(sendline));//发送

		if(n > 0) printf("Send Success\n");
		break;
	}

	return 0;
}

