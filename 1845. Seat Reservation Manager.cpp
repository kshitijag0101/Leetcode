class SeatManager {
public:
    set<int> m;
    int n;
    SeatManager(int n) {
        this->n = n;
        for(int i=1;i<=n;i++) m.insert(i);
    }
    
    int reserve() {
        int x = *m.begin();
        m.erase(x);
        return x;
    }
    
    void unreserve(int seatNumber) {
        m.insert(seatNumber);
    }
};

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */