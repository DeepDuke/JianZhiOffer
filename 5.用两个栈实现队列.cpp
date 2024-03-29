/*
一个栈负责存储输入队列的数据，另一个栈负责排出队列的数据。
*/
class Solution
{
public:
    void push(int node) {
        stack1.push(node); 
    }

    int pop() {
        if(stack2.empty()){
            while(!stack1.empty()){
                stack2.push(stack1.top());
                stack1.pop();
            }
        }
        int node = stack2.top();
        stack2.pop();
        return node;
    }

private:
    stack<int> stack1;
    stack<int> stack2;
};