#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
	int a;
	cout<<"Welcome to the auto watch TikTok program!"<<endl;
	cout<<"All programs like TikTok can be used."<<endl;
	cout<<"Before starting the program, please make sure your phone has adb turned on and connected to the computer."<<endl;
	cout<<"Please make sure you have opened TikTok or a TikTok-like app on your phone."<<endl;
	cout<<"When you think it's time to exit, just close the window"<<endl;
	cout<<"So pick an interval now and start using it!"<<endl;
	cout<<"Please enter the interval time you need:";
	cin>>a;
	system("cls");
	a*=1000;
	for(int i=1;;i++)
	{
		cout<<"The "<<i<<" cycle";
		system("adb shell input swipe 550 1750 520 830 100");
		Sleep(a);
		system("cls");
	}
}
