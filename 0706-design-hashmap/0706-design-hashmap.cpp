class MyHashMap {
public:
    vector<pair<int, int>> vec;
    MyHashMap() {
    }
    
    void put(int key, int value) {
        for(int i=0; i<vec.size(); i++){
            if(vec[i].first == key){
                vec[i].second = value;
                return;
            }
        }
        vec.push_back({key, value});
    }
    
    int get(int key) {
        for(int i=0; i<vec.size(); i++){
            if(vec[i].first == key){
                return vec[i].second;
            }
        }
        return -1;
        
    }
    
    void remove(int key) {
        for(int i=0; i<vec.size(); i++){
            if(vec[i].first == key){
                vec.erase(vec.begin()+i);
                break;
            }
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */