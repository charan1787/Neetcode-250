class MyHashSet {
public:
vector<bool> vec;
    MyHashSet() {
        vec.resize(1000001,false);
    }
    
    void add(int key) {
        vec[key]=true;
    }
    
    void remove(int key) {
        vec[key]=false;
    }
    
    bool contains(int key) {
        return vec[key] == true;
    }
};

// https://leetcode.com/problems/design-hashset/
// Bruteforce Solution for now
// optimal Hash Solution with chaining when you learn hashing concept

