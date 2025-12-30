class myStack {
    queue<int> q;

  public:

    void push(int x) {
        int n = q.size();
        q.push(x);
        for(int i=0;i<n;i++){
            q.push(q.front());
            q.pop();
        }
    }

    void pop() {
        if(q.size()!=0)q.pop();
    }

    int top() {
        if(q.empty()) return -1;
        return q.front();
    }

    int size() {
        return q.size();
    }
};
