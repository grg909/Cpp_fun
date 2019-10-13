/*
* Date    : 2019/10/13
* Author  : WANG JINGE
* Email   : wang.j.au@m.titech.ac.jp
* Standard: C++14
*/


// Vector actually IS the array, but with some additional features.
vector<int> v(5);

// output: 00000
for(auto i : v)
    cout << i;

int elements_count = v.size(); //  size() is unsigned ;  it’s not a good practice to compare v.size() to zero
bool is_empty = v.empty();

// this is beyond the capacity of the vector.
for(int i = 1; i < 1000000; i *= 2)
    v.push_back(i);

vector<int> v(20);
for(int i = 0; i < 20; i++)
    v[i] = i+1;
v.resize(25);
for(int i = 20; i < 25; i++)
    v[i] = i*2;


