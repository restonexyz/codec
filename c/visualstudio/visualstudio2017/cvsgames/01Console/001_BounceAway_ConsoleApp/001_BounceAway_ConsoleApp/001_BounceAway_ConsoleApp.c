// 001_BounceAway_ConsoleApp.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <stdio.h>

/**
 * 弹跳小球
 * 2018-02-04
 * restone
 */

 // 在坐标(x,y)处输出一个小球
int main()
{
	int i , j;
	int x = 5, y = 10;
	
	// 输出小球上面的空行
	for(i=0;i<x;i++)
	{
		printf("\n");
	}
	// 输出小球左边的空格
	for(j=0;j<y;j++)
	{
		printf("   ");
	}
	printf("o");	// 输出小球o
	printf("\n");



	printf("dddd \n");
	// 控制台暂停
	system("pause");
    return 0;
}

