# Cpp_fun


- 顺序容器
    - vector：尾端插入元素有较高性能，动态数组实现；
    - deque：首尾插入元素都有较高性能，动态数据实现；
    - list：可以常数时间在任何地方插入元素，双向链表实现；
- 关联容器
    - set：不同元素的集合，平衡二叉树实现，检索时间是O(long(N))
    - multiset：同上，可以包含相同元数据；
    - map：同set，但存放的是键值对
    - mutimap：同上，键可以重复
    - unordered_map: 哈希表实现，查找O(1)
- 容器适配器：stack，queue，priority_queue