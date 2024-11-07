﻿// experiment2.3.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include<iostream>
using namespace std;
int main()
{
	int s1;//定义边长1
	int s2;//定义边长2
	int s3;//定义边长3
	cout << "请分别输入三边边长" << endl;//提示输入三条边边长
	cout << "边长1:";//提示输入边长1
	cin >> s1;//输入边长1
	cout << "边长2:";//提示输入边长2
	cin >> s2;//输入边长2
	cout << "边长3:";//提示输入边长3
	cin >> s3;//输入边长三
	if (s1 + s2 > s3 && s1 + s3 > s2 && s2 + s3 > s1)//判断是否满足三角形构成条件(两边之和大于第三边)
	{
		//满足三角形构成条件
		if (s1 == s2 || s2 == s3 || s1 == s3)//判断是否存在两边边长相等的情况
		{
			cout << "您创建的是等腰三角形" << endl;//输出等腰三角形结果
		}
		cout << "三角形周长为" << (s1 + s2 + s3) << endl;//输出三角形周长
	}
	else//不满足三角形构成条件
	{
		cout << "您输入的三边长不能组成三角形" << endl;//输出提示三角形不能构成
	}
	return 0;
}