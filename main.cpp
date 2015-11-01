class Queue {
public:
    // Push element x to the back of queue.
    stack<int> mystk1, mystk2;
    
    void moveStk(){
        int tmp = mystk1.size();
        for(int i = 0; i < tmp; i++){
            int mytmp = mystk1.top();
            mystk2.push(mytmp);
            mystk1.pop();
        }
    }
    
    
    void push(int x) {
        mystk1.push(x);
    }

    // Removes the element from in front of queue.
    void pop(void) {
        if(mystk2.size() == 0 && mystk1.size() == 0) return;
        if(mystk2.size() == 0){
            moveStk();
        }
        mystk2.pop();
    }

    // Get the front element.
    int peek(void) {
        if(mystk2.size() == 0 && mystk1.size() == 0) return INT_MIN;
        if(mystk2.size() == 0){
            moveStk();
        }
        return mystk2.top();
    }

    // Return whether the queue is empty.
    bool empty(void) {
        if(mystk1.size()+mystk2.size() == 0) return true;
        else return false;
    }
};
