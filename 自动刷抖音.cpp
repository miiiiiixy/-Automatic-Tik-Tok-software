#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
	int a;
	cout<<"��ӭʹ���Զ�ˢ������"<<endl;
	cout<<"��������һ���ĳ������ʹ��"<<endl;
	cout<<"��ʹ��֮ǰ����ȷ�������ֻ��ѿ���adb�������ӵ���"<<endl;
	cout<<"�����δ����adb������ո���Ŀ��readme���ĵ�����"<<endl; 
	cout<<"�������������д˳���ǰ�������ֻ��ϴ򿪶������බ������"<<endl;
	cout<<"�������˳��ˣ�ֻ��رմ��ڼ���"<<endl;
	cout<<"���Ե���׼���ú���Ϊ���Կ�ʼʱ�Ϳ��Կ�ʼ��"<<endl;
	cout<<"������������ļ��ʱ�䣺";
	cin>>a;
	system("cls");
	a*=1000;
	for(int i=1;;i++)
	{
		cout<<"��"<<i<<"��ѭ��";
		system("adb shell input swipe 550 1750 520 830 100");
		Sleep(a);
		system("cls");
	}
}
