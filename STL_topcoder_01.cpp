/*
* Date    : 2019/10/13
* Author  : WANG JINGE
* Email   : wang.j.au@m.titech.ac.jp
* Standard: C++14
*/

// 特别注意其中的宏定义用法，非常有用！

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

// By using this macros we can traverse every kind of container
#define tr(container, it) for(auto it = container.begin(); it != container.end(); it++)

#define all(c) c.begin(), c.end() // 定义宏
vector<int> v;
vector<int> v2;
v.insert(1, 42);  // insert value 42 after the first
v.insert(v, all(v2)); // insert all
v.erase(v.begin(), v.begin()+5); // erase(iterator), delect the first 5

// set can check the presence of element in O(logN)
set<int> s;
for(int i=1; i<= 100; i++)    // set don't have push_back, it make sense: since the order of elements in set does not matter
    s.insert(i);

for(int i = 2; i <= 100; i += 2)
    s.erase(i);

int n = int(s.size());

// set is non-linear container, so can't use index to traverse, but use iterator instead.
int r =0;
for(auto i=s.begin(); it != s.end(); it++)
    r += *it;
// more elegent way, use macros
set< pair< string, pair<int, vector<int> > > > ss;
tr(ss, it){
    r += it->second.first; // or (*it).second.first
}

// global algorithm find() is O(N), but for set.find() is O(logN)
// While searching in set and map (and also in multiset/multimap, hash_map/hash_set, etc.) do not use global find
if(s.find(42) != s.end())
    cout << "find it!";

if(s.count(42)) {}  // also in O(logN)

// 查找的宏定义
#define present(container, element) (container.find(element) != container.end())
#define vpresent(container, element) (find(container.begin(), container.end(), element) != container.end())  // for vector, use globel find (vector don't have find itself)

// map, may[] will create new element when key don't exit.
void f(const map<string, int>& m){
    if(m["the morning"] == 42) { // error, can't use [] on const map
    }
    if(m.find("the morning") != m.end() and m.find("the morning")->second == 42) {
        cout << "this is correct" << endl;
    }
}

// set and map is realized by red-black trees.

set<int> s;
auto it = s.find(42);
auto it1 = it, it2 = it;
it1--;
it2++;
int a = *it1, b = *it2;
// if 42 exit not only once, then ‘a’ will contain the first neighbor of 42 to the left and ‘b’ the first one to the right.

// summary
typedef vector< int > vi;
typedef vector< vi > vvi;
typedef pair< int,int > ii;
#define sz(a) int((a).size())
#define pb push_back
#define all(c) (c).begin(),(c).end()
#define tr(c,i) for(auto i = (c).begin(); i != (c).end(); i++)
#define present(c,x) ((c).find(x) != (c).end())
#define cpresent(c,x) (find(all(c),x) != (c).end())