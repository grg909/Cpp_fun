/*
* Date    : 2019/10/10
* Author  : WANG JINGE
* Email   : wang.j.au@m.titech.ac.jp
* Standard: C++14
*/


// C++ string class use char array to store
#include <string>
#include <iostream>

using namespace std;

int main() {

    string str("first string");

    string str2(str);

    // hhhhh
    string str3(5, "h");

    // string
    string str4(str, 6, 6);

    // first
    string str5(str.begin(), str.begin() + 5);

    string str5 = str;

    str4.clear();

    int len = str5.length(), len2 = str5.size(); // string更推荐用length()

    char ch = str5.at(2), ch2 = str5[2];

    char ch_f = str5.front(); // str5[0]

    char ch_b = str5.back();  // str5[len -1]

    // c_str returns null terminated char array version of string
    const char *charstr = str5.c_str();
    printf("%s\n", charstr);

    str5.append("extension"); // str5 += "extension" is ok, but slower

    str4.append(str6, 0, 6);

    if (str5.find(str4) != string::npos)
        cout << "str4 found in str6 at " << str6.find(str4) << endl;

    //  if second argument is not passed, string till end is taken as substring
    cout << str5.substr(7) << endl;

    //  erase(a, b) deletes b characters at index a
    str5.erase(7, 4);

    str5.repalace(2, 7, "ese are test");

    // C++11便利！ Converts a numeric value to std::string.
    string s = to_string(42);

    // 比较两个string是否相等（一模一样），最方便
    str1 == str2;

    return 0;
}

