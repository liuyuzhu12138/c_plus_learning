#include <vector>
#include <iostream>

int main() {
    std::vector<int> v;//std::vector<int> v(10); // 直接指定大小，capacity = size = 10
    // 观察容量增长
    for (int i = 0; i < 5; ++i) {
        v.push_back(i);
        std::cout << "size: " << v.size() 
                  << ", capacity: " << v.capacity() << "\n";
    }
    // 预分配避免扩容
    std::vector<int> v2;
    v2.reserve(100);   // capacity 至少为 100
    for (int i = 0; i < 100; ++i) v2.push_back(i);  // 不会重分配
    std::cout << "v2 capacity: " << v2.capacity() << "\n";
    return 0;
}