class MinStack {
public:
    //stack of pair data type {the element that is being pushed, and the other for keeping track of min element found so far}
    stack<pair<int, int>>st;
    MinStack() {
        
    }
    
    void push(int value) {

        if(st.empty()==true){
            //means first elementr that is going to be inserted
            st.push({value, value});
        }
    
        else{
            st.push({value, min(value, st.top().second)});
        }
        
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
        return st.top().first;
        
    }
    
    int getMin() {
        return st.top().second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */