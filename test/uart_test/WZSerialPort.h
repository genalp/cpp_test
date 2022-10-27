 
#ifndef _WZSERIALPORT_H
#define _WZSERIALPORT_H
#include <iostream>
using namespace std;
/*
	作者：欧阳伟
	日期：2017-12-14
	类名：WZSerialPort
	用途：串口读写
	示例：
		WZSerialPort w;
		if(w.open("COM1",9600，0，8，1))
		{
			w.send("helloworld",10);
			char buf[1024];
			w.receive(buf,1024);
		}	
*/
 
class WZSerialPort
{
public:
	WZSerialPort();
	~WZSerialPort();
 
	// 打开串口,成功返回true，失败返回false
	// portname(串口名): 在Windows下是"COM1""COM2"等，在Linux下是"/dev/ttyS1"等
	// baudrate(波特率): 9600、19200、38400、43000、56000、57600、115200 
	// parity(校验位): 0为无校验，1为奇校验，2为偶校验，3为标记校验
	// databit(数据位): 4-8，通常为8位
	// stopbit(停止位): 1为1位停止位，2为2位停止位,3为1.5位停止位
	// synchronizable(同步、异步): 0为异步，1为同步
	bool open(const char* portname, int baudrate=115200, char parity=0, char databit=8, char stopbit=1, char synchronizeflag=1);
 
	//关闭串口，参数待定
	void close();
 
	//发送数据或写数据，成功返回发送数据长度，失败返回0
	int send(string dat);
 
	//接受数据或读数据，成功返回读取实际数据的长度，失败返回0
	string receive();
 
private:
	int pHandle[16];
	char synchronizeflag;
};
 
#endif