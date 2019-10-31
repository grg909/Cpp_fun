/*
* Date    : 2019/10/13
* Author  : WANG JINGE
* Email   : wang.j.au@m.titech.ac.jp
* Standard: C++14
*/

#include <iosteam>
#include <string>

using namespace std;

int main() {

    string str;

    getline(cin, str); // get input using getline(), ex."sdfa"

    str.push_back('s'); // "sdfas"

    str.pop_back(); // "sdfa"

    string str2 = "geeksforgeeks is for geeks";

    str2.resize(13);

    cout << str2 << endl; // "geeksforgeeks"

    // iterator Functions
    for(auto it=str2.begin(); it != str2.end(); it++)
        cout << *it;
    cout << endl;

    for (auto it1=str2.rbegin(); it1 != str2.rend(); it1++)
        cout << *it1;
    cout << endl;

    string str1 = "geeksforgeeks is for geeks";

    string str3 = "geeksforgeeks rocks";

    char ch[80];

    str1.copy(ch, 13, 0);

    str1.swap(str3); // this function swaps one string with other.

    cout << str1 << endl;
    cout << str3 << endl;

}