/*
* Date    : 2019/11/15
* Author  : WANG JINGE
* Email   : wang.j.au@m.titech.ac.jp
* Standard: C++14
*/

// BFS重点：构建图，找到start point, end point, 然后如何找the neighbors of cur


// Template 1, won't be possible visit a node twice
// Return the length of the shortest path between root and target node.
int BFS(Node root, Node target) {
    queue <Node> cache;   // store all nodes which are waiting to be processed
    int step = 0;

    cache.push(root);
    while (!cache.empty()) {
        step = step + 1;
        int size = cache.size();
        for (int i = 0; i < size; i++) {
            Node cur = cache.front();
            if (cur == target) return step;
            for (Node next : the neighbors of cur)
                cache.push(next);
            cache.pop();
        }
    }
    return -1;
}


// Template 2
int BFS(Node root, Node target) {
    queue <Node> cache;
    unordered_set <Node> visited;
    int step = 0;

    cache.push(root);
    visited.insert(root);
    while (!cache.empty()) {
        step = step + 1;
        int size = cache.size();
        for (int i = 0; i < size(); i++) {
            Node cur = cache.front();
            if (cur == target) return step;
            for (Node next: the neighbors of cur){
                if (visited.find(next) == visited.end()) {
                    cache.push(next);
                    visited.insert(next);
                }
            }
        }
    }
    return -1;
}


