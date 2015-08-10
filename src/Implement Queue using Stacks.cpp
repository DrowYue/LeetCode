class Queue {

public:

    // Push element x to the back of queue.

    void push(int x) {

        s.push(x);

    }



    // Removes the element from in front of queue.

    void pop(void) {

        op(s, t);

        t.pop();

        op(t, s);

    }



    // Get the front element.

    int peek(void) {

        op(s, t);

        int res = t.top();

        op(t, s);

        return res;

    }



    // Return whether the queue is empty.

    bool empty(void) {

        return s.empty();

    }

private:

    std::stack<int> s, t;

    void op(std::stack<int> &a, std::stack<int> &b) {

        while (!a.empty()) {

            b.push(a.top());

            a.pop();

        }

    }

};
