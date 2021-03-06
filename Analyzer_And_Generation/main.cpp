// main.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include "Analyzer.h"

using namespace std;

int main()
{
	cout << "请输入欲分析的文件名（源程序文件名）：";
	string fileName;
	cin >> fileName;
	Generator gen;
	gen.Init(fileName);
	Analyzer analyzer(&gen);
	analyzer.Init(fileName);
	analyzer.Execute();
	gen.Close();
	system("pause");
    return 0;
}

