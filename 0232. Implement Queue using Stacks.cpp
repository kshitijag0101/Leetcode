class MyQueue {
public:
    stack<int> s1;
    MyQueue() {
        
    }
    void push(int x) {
        stack<int> temp;
        while(s1.empty()==false){
            temp.push(s1.top());
            s1.pop();
        }
        s1.push(x);
        while(temp.empty()==false){
            s1.push(temp.top());
            temp.pop();
        }
    }
    int pop() {
        int val=s1.top();
        s1.pop();
        return val;
    }
    int peek() {
        return s1.top();
    }
    bool empty() {
        return s1.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */