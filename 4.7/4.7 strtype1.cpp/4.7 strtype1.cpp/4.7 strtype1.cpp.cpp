// 4.7 strtype1.cpp.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
int main()
{
    using namespace std;
    char charr1[20];//创建字符串数组，定义但是不初始化
    char charr2[20] = "jaguar";
    string str1;
    string str2 = "panther";

    cout << "Enter a kind of fline: ";
    cin >> charr1;
    cout << "Enter another kind of feline:  ";
    cin >> str1;
    cout << "HERE ARE SOME FELINES:   " << endl;
    cout << charr1 << "   " << charr2 << "   "
        << str1 << "     " << str2 << endl;
    cout << "the third letter in    " << charr2 << " is   "
        << charr2[2] << endl;
    cout << "the third letter in    " << str2 << " is   "
        << str2[2] << endl;   
}


