class MyHashMap {
public:
vector<int> vec;
    MyHashMap() {
        vec.resize(1000001,-1);
    }
    
    void put(int key, int value) {
        vec[key]=value;
    }
    
    int get(int key) {
        return vec[key];
    }
    
    void remove(int key) {
        vec[key]=-1;
    }
};

// https://leetcode.com/problems/design-hashmap/
// This is a Brute Force Solution
// Will update the optimal solution when Hashing concept is done
