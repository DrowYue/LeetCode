class Stack {
public:
    // Push element x onto stack.
    void push(int x) {
        s.push(x);
    }
    // Removes the element on top of the stack.
    void pop() {
        op(s, t, s.size()-1);
        s.pop();
        op(t, s, t.size());
    }
    // Get the top element.
    int top() {
        op(s, t, s.size()-1);
        int res = s.front();
        t.push(s.front());
        s.pop();
        op(t, s, t.size());
        return res;
    }
    // Return whether the stack is empty.
    bool empty() {
        return s.empty();
    }
private:
    std::queue<int>  s, t;
    void op(std::queue<int> &a, std::queue<int> &b, int pace) {
        for (int i = 0; i < pace; i++) {
            b.push(a.front());
            a.pop();
        }
    }
};
