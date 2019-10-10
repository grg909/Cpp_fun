/*
* Date    : 2019/10/10
* Author  : WANG JINGE
* Email   : wang.j.au@m.titech.ac.jp
* Standard: C++14
*/


#include <string>
#include <iostream>

using namespace std;

string returnFloatingPart(string str) {

    if(str.find('.') != string::npos)
        return str.substr(str.find('.')+1);
    else
        return "";
}

bool containsOnlyDigit(string num) {

    int l = num.length();
    for(int i = 0; i < l; i++) {
        if(num.at(i) < '0' or num.at(i) > '9')
            return false;
    }
    return true;
}


string replaceBlankWith20(string str) {

    string replaceby = "%20";

    while(str.find(' ') != string::npos)
        str.replace(str.find(' '), 1, replaceby);

    return str;
}

int main() {

    string fnum("23.342");
    cout << "Floating part is : " << returnFloatingPart(fnum) << endl;

    string num = "3452";
    if(containsOnlyDigit(num))
        cout << "string contains only digit" << endl;

    string urlex = "google com in";
    cout << replaceBlankWith20(urlex) << endl;

    return 0;
}
