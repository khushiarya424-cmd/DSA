class MyQueue {
public:
stack<int>s1;
stack<int>s2;

    MyQueue() {




        
    }
    
    void push(int x) {

      s1.push(x);
        
    }
    
    int pop() {
        if(s2.empty()==false){
            // if s2 mein elements hai
            int element=s2.top();
            s2.pop();
            return element;
        }
        else{
            //s2 empty hai so insert elements from s1 to s2
            int n=s1.size();
            while(n!=0){
                s2.push(s1.top());
                s1.pop();
                n--;

            }
            int element=s2.top();
            s2.pop();
            return element;
        }
        
    }
    
    int peek() {
        if(s2.empty()==false){
            return s2.top();
        }
        else{
            int n=s1.size();

            while(n!=0){
                s2.push(s1.top());
                s1.pop();
                n--; 
            }
            return s2.top();
        }
    }
    
    bool empty() {
        if(s2.empty()==true && s1.empty()==true){
            return true;
        }
        else{
            return false;
        }
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