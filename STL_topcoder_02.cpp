/*
* Date    : 2019/10/16
* Author  : WANG JINGE
* Email   : wang.j.au@m.titech.ac.jp
* Standard: C++14
*/

// from 01
typedef vector< int > vi;
typedef vector< vi > vvi;
typedef pair< int,int > ii;
#define sz(a) int((a).size())
#define pb push_back
#define all(c) (c).begin(),(c).end()
#define tr(c,i) for(auto i = (c).begin(); i != (c).end(); i++)
#define present(c,x) ((c).find(x) != (c).end())
#define cpresent(c,x) (find(all(c),x) != (c).end())


// creating vector from map
map<string, int> m;
vector<pair<string, int> > v(all(m)); //  to use indices of elements in a way that is impossible in map

// copy data between containers
copy(from_begin, from_end, to_begin);

vi v1 = {1,2,3,4};;
vi v2 = {6,7,8,9,0};
v1.resize(v1.size() + v2.size());
copy(all(v2), v1.end()-v2.size());

// more elegent way: inserter
copy(all(v2),inserter(v1, v1.end()));
copy(all(v2), back_inserter(v1));    // To insert elemements to vector with push_back use back_inserter, or front_inserter is available for deque container.

set<int> s= {6,7,8,9,0};
copy(all(v2), inserter(s));  // 因为set和vector不同的insert函数实现

copy(v1.rbegin(), v2.rend(), back_inserter(v1));  // copy data in reverse order

// merging list
set_union(), set_intersection(), set_difference(), set_symmetric_difference().
// the size of the result is unknown, so this function returns the end iterator of output
// input datasets need to be sorted to use these algorithms， so we can use set
end_result = set_intersection(begin1, end1, begin2, end2, begin_result); // 四种函数形参都这样。都O(N1+N2)


set<int> s1, s2;
for(int i = 1; i < 5; i++) {
    s1.insert(i*(i+1));
    s2.insert(i);
}
static int temp[50];
vector<int> res = vi(temp, set_symmetric_difference(all(s1), all(s2), temp));
int cnt = set_symmetric_difference(all(s1), all(s2), temp) - temp;

// TODO: Calculating Algorithms

// TODO: Nontrivial Sorting

// TODO: Using your own objects in Maps and Sets

// Memory management in Vectors
vi v;
v.reverse(1050);

// Implementing real algorithms with STL

// Depth-first search (DFS), 以下是代码段
int N; // number of vertices
vvi W; // graph
vi V;  // v is a visited flag

void dfs(int i){
    if(!V[i]){
        V[i] = true;
        for_each(all(W[i]), dfs);      // 在stl algorithm中, 函数式编程
    }
}

bool check_graph_connected_dfs() {
    int start_vertex = 0;
    V = vi(N, false);           //  It’s quite OK to assign true and false to int’s in vi.
    dfs(start_vertex);
    return (find(all(V), 0) == V.end());      // in c++, 0 == false
}

// Breadth-first search (BFS)
int N; // number of vertices
vvi W; // lists of adjacent vertices

bool check_graph_connected_bfs() {
    int start_vertex = 0;
    vi V(N, false);
    queue<int> Q;
    Q.push(start_vertex);
    V[start_vertex] = true;
    while(!Q.empty()) {
        int i = Q.front();
        Q.pop();
        tr(W[i], it) {
            if(!V[*it]){
                V[*it] = true;
                Q.push(*it);
            }
        }

    }
    return (find(all(V), 0) == V.end());
}