/*
* Date    : 2019/10/13
* Author  : WANG JINGE
* Email   : wang.j.au@m.titech.ac.jp
* Standard: C++14
*/


using namespace std;

// python版for循环
for(auto i : myList)
    cout << i;

// auto动态
auto x = "Hello, world";
cout << x;

// 元组
auto tp = make_tuple(5, 6, 7);
cout << get<0>(tp);  // 5
int x, y, z;
tie(x, y, z) = tp;  // 类似python解包

// 统一的初始化
auto myList = vector<int>{3,2,4,6};
myList.push_back(0);

auto myDict = unordered_map<int, const char*>{{5, "foo"}, {6, "bar"}};
cout<< myDict[5];

// lambda表达式
sort(myList.begin(), myList.end(), [](int x, int y){ return abs(x) < abs(y);})