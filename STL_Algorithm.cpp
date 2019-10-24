/*
* Date    : 2019/10/23
* Author  : WANG JINGE
* Email   : wang.j.au@m.titech.ac.jp
* Standard: C++14
*/


#include <algorithm>

using namespace std;

typedef vector< int > vi;
typedef vector< vi > vvi;
typedef pair< int,int > ii;
#define sz(a) int((a).size())
#define pb push_back
#define all(c) (c).begin(),(c).end()
#define tr(c,i) for(typeof((c)).begin() i = (c).begin(); i != (c).end(); i++)
#define present(c,x) ((c).find(x) != (c).end())
#define cpresent(c,x) (find(all(c),x) != (c).end())

vi vt = {10, 20, 5, 23, 42, 15, 5};

// Sorting the vector in ascending order (default)
sort(all(vt));

// using lambda function as compare function, descending order
sort(all(vt), [](int x, int y){ return x > y;});

reverse(all(vt));

cout << *max_element(all(vt));
cout << *min_element(all(vt));

// sum
int sum_n = 0
for(auto& i: vt)
    sum_n += i;

count(all(vt), 5);

auto index = find(all(vt), 5);
if(index != vt.end())
    cout << distance(vt.begin(), index);

// binary search
// lower_bound, upper_bound 只能用于已经sorted的序列
// Returns the first occurrence of 5
auto q = lower_bound(all(vt), 5);
// Return the first occurrence which greater than 5. 易错
auto p = upper_bound(all(vt), 5);

// erases the duplicate occurrences in sorted vector in a single line.
vt.erase(unique(all(vt)),vt.end());

// 遍历unordered_map
unordered_map<int, int> mp;
tr(mp,it) {
    cout << it->first << ':' << it->second << endl;
}