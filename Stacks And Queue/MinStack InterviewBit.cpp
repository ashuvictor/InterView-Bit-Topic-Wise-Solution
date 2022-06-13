
Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.

push(x) – Push element x onto stack.
pop() – Removes the element on top of the stack.
top() – Get the top element.
getMin() – Retrieve the minimum element in the stack.
Note that all the operations have to be constant time operations.

Questions to ask the interviewer :

Q: What should getMin() do on empty stack? 
A: In this case, return -1.

Q: What should pop do on empty stack? 
A: In this case, nothing. 

Q: What should top() do on empty stack?
A: In this case, return -1
NOTE : If you are using your own declared global variables, make sure to clear them out in the constructor.

stack<int>s;
stack<int>s2;
MinStack::MinStack() {
    while(!s.empty()){
        s.pop();
    }
    while(!s2.empty()){
        s2.pop();
    }
}

void MinStack::push(int x) {
    s.push(x);
    if(s2.empty() or x<=s2.top())
    s2.push(x);
}

void MinStack::pop() {
    if(!s2.empty() and !s.empty() and s.top()==s2.top())
s2.pop();
if(!s.empty())
s.pop();
}

int MinStack::top() {
    if(s.empty())
    return -1;
    return s.top();
}

int MinStack::getMin() {
    if(s2.empty())
    return -1;
    return s2.top();
}

