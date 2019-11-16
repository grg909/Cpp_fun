/*
* Date    : 2019/11/16
* Author  : WANG JINGE
* Email   : wang.j.au@m.titech.ac.jp
* Standard: C++14
*/


// Recusion
bool DFS(Node cur, Node target, unordered_set<Node> &visit){
    if(cur == target) return true;
    for(auto next : each neighbor of cur){
        if(next is not in visit){
            add next to visit;
            if(DFS(next, target, visit))
                return true;
        }
    }
    return false;
}