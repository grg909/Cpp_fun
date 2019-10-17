/*
* Date    : 2019/10/09
* Author  : WANG JINGE
* Email   : wang.j.au@m.titech.ac.jp
* Standard: C++14
*/

/* It is not good practice to begin investigating the full functionality of some STL container
 * during the heat of a Single Round Match.
 * If you are not familiar with the container you are about to use, you'd be better off using vector or map/set.
 * For example, stack can always be implemented via vector, and it’s much faster to act this way
 * if you don’t remember the syntax of stack container.
*/


int arr[] = {1,2,3,4};

vector<int> vec;

deque<int> dqe;

// 双向链表实现
list<int> list;

set<int> set;

// 哈希表实现
unordered_map<int, string> m;

// defined in <utility>
pair<int, int> p(1,1.2);
g2 = make_pair(1, 'a');
p.first;
p.second;