
An arithmetic expression is given by a charater array A of size N. Evaluate the value of an arithmetic expression in Reverse Polish Notation.

Valid operators are +, -, *, /. Each character may be an integer or an operator.



int Solution::evalRPN(vector<string> &A) {
    
    
      stack<int>st;
        for(int i=0;i<A.size();i++){
            if(A[i]=="+" or A[i]=="-" or A[i]=="*" or A[i]=="/")
            {
                if(st.size()>=2)
                {
                    int x=st.top();
                    st.pop();
                    int y=st.top();
                    st.pop();
                    if(A[i]=="+")
                        st.push(x+y);
                    if(A[i]=="-")
                        st.push(y-x);
                    if(A[i]=="*")
                        st.push(x*y);
                    if(A[i]=="/")
                        st.push(y/x);
                }
            }
            else
            {
                st.push(stoi(A[i]));
            }
        }
    return st.top();
}
