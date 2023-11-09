#include <iostream>
using namespace std;
int main()
{
	/*
	主函数
	输出Hello World
	*/
	cout << "输入姓名" << endl;
	//暂停,不建议
	//system("pause");
	string name;

	cin >> name;
	
	//提升用户输入姓名
	cout << "Hello," << name << endl;
	//建议使用阻塞
	cin.get();
	cin.get();

}