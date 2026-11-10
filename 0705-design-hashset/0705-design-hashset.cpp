class MyHashSet {
public:

    vector<int> vec;
    MyHashSet() {
    }
    
    void add(int key) {
        for(int i=0; i<vec.size(); i++){
            if(vec[i] == key){
                return;
            }
        }
        vec.push_back(key);
    }
    
    void remove(int key) {
        for(int i=0; i<vec.size(); i++){
            if(vec[i] == key){
                vec.erase(vec.begin()+i);
                return;
            }
        }
    }
    
    bool contains(int key) {
        for(int i=0; i<vec.size(); i++){
            if(vec[i] == key){
                return true;
            }
        }
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */