#include <stdio.h>
#include <iostream>
#include "winSocketClient.h"

using namespace std;

////´«Êätxt demo
//int main01()
//{
//	char path[100];
//	sprintf(path, "%s", "E:\\ProjectFiles\\socket-Test\\socket-Test\\2.bmp");
//	SocketClient nuc;
//	nuc.CSocket_Init();
//	nuc.CSocket_Send_Connection();
//	nuc.CSocket_SendFile(path);
//
//
//	return 0;
//}

//´«Êächar
int main()
{
	SocketClient nuc;
	char path[100] = "1 2 3.5 3.6 5.6 ";
	nuc.CSocket_Init();
	nuc.CSocket_Send_Connection();
	nuc.CSocket_Send(path);
	return 0;

}
