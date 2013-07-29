MeCloud
=======

About Private Cloud Application using Aliyun And Amazon

#Markdown新手指南#
- http://wowubuntu.com/markdown/
- http://www.yangzhiping.com/tech/r-markdown-knitr.html
- http://jianshu.io/p/q81RER

#EgtMiles#
一个仿PATH的界面，有时间轴

#doc#
文档目录

#CameraTest#
一个Camera实例

#POCO_C++#
与POCO C++库相关的资料，比如代码，技术文档等


#COMPILE#
##OPENSSL##
[参考](http://blog.csdn.net/yyingwei/article/details/8562337)

- version is openssl-1.0.1e.tar.gz
- download url: http://www.openssl.org/source/openssl-1.0.1e.tar.gz

- ./Configure --prefix=/opt/openssl --openssldir=/opt/openssl/openssl linux-x86_64 enable-shared -fPIC
- make
- make test
- make install

##POCO C++##
./configure --prefix=/opt/poco --config=Linux --include-path=/opt/openssl/include --library-path=/opt/openssl/lib --omit=Data/ODBC

##siege##
一个WEB压力测试工具
siege -c 500 -r 500 -H "Date: Mon, 29 Jul 2013 10:39:16 GMT" -H "X-HOJY-Authorization:HOJY_c9ee688fa7de40bbc0ced8b5a493121c" -H "X-HOJY-IMEI:1234567890" -H "X-HOJY-SN:SN1234567890" -H "X-HOJY-Version:V1316R01C01S90" http://42.121.253.77:8080/hsworkapp/newversion

###参考###
- http://www.joedog.org/siege-home/
- http://www.zihou.me/html/2011/01/27/2737.html
- http://www.chedong.com/blog/archives/000033.html
- http://book.51cto.com/art/201110/299804.htm
- https://code.google.com/p/siege-windows/

