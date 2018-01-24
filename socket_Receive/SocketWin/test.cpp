#include <stdio.h>
#include <iostream>
#include "winSocketClient.h"

using namespace std;

////´«Êätxt demo
//int main01()
//{
//	char path[100];
//	sprintf(path,"%s","G:\\ProjectFiles\\SocketWin\\SocketWin\\2.bmp");
//	SocketClient win;
//	win.CSocket_Init();
//	win.CSocket_Recv_Connection();
//	win.CSocket_ReceiveFile(path);
//	
//
//	return 0;
//}

//´«Êächar demo
int main()
{
	char path[100];
	memset(path, 0, 100);
	SocketClient win;
	win.CSocket_Init();
	win.CSocket_Recv_Connection();
	win.CSocket_Receive(path);
	cout << path;
	return 0;
}