#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
	int a;
	cout<<"欢迎使用自动刷抖音！"<<endl;
	cout<<"所有像抖音一样的程序均可使用"<<endl;
	cout<<"在使用之前，请确认您的手机已开启adb并已连接电脑"<<endl;
	cout<<"如果您未开启adb，请参照该项目的readme稳文档开启"<<endl; 
	cout<<"并且请您在运行此程序前已在您手机上打开抖音或类抖音程序"<<endl;
	cout<<"当您想退出了，只需关闭窗口即可"<<endl;
	cout<<"所以当您准备好后，认为可以开始时就可以开始了"<<endl;
	cout<<"请输入您所需的间隔时间：";
	cin>>a;
	system("cls");
	a*=1000;
	for(int i=1;;i++)
	{
		cout<<"第"<<i<<"次循环";
		system("adb shell input swipe 550 1750 520 830 100");
		Sleep(a);
		system("cls");
	}
}
