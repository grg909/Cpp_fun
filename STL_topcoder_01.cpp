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

// create multidemensional vectors
vector<vector<int> > matrix(N, vector<int>(M));

// never copying of vector when passing it as a parameter
void some_function(const vector<int>& v) {} // if change the contents of vector is needed, omit the const

pair< string, pair<int, int> > p;
string s = p.first;
int x = p.second.first;

// Objects with these properties(*it, <, ++/--) that are associated with containers are called iterators, just like pointer.
// STL algorithms use begin() and end(), end iterator is point to first invalid object, not the last object.
vector<int> v;
for(auto it = v.begin(); it != v.end(); i++ )
    *it++;

// reverse
reverse(v.begin(), v.end())

// find
vector<int> v;
for(int i = 0 ; i< 100; i++) v.push_back(i);
if(find(v.begin(), v.end(), 49) != v.end()) {
    // get the value
    value = *find(v.begin(), v.end(), 49);
    // if want to get the index of found element
    int i = (find(v.begin(), v.end(), 49)) - v.begin();
    if(i < v.size()) {}
}

int data[] = {1,5,2,4,3};
vector<int> x(data, data+5);
int v1 = *max_element(x.begin(), x.end());  // value
int i1 = min_element(x.begin(), x.end()) - x.begin(); // index

sort(x.begin(), x.end());
sort(x.rbegin(), x.rend());

vector<int> v;
v.insert(1, 42);  // insert value 42 after the first