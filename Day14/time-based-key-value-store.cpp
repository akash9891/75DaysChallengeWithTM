class TimeMap {
public:
   
        unordered_map <string, vector <pair <int, string> > > Map;
  
    
    void set(string key, string value, int timestamp) {
    Map[key].push_back({timestamp, value});
}

string get(string key, int timestamp) {
    int left = 0, right = Map[key].size() - 1;
    string res = "";

    while(left <= right) {
        int mid = (left + right) / 2;
        if (timestamp >= Map[key][mid].first) res = Map[key][mid].second, left = mid + 1;
        else right = mid - 1;
    }
    return res;
}
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */