class Solution {
public:
   
    int evaluate(int a, int b, string op) {
        if(op == "+")
           return a + b;
        if(op == "-")
           return a - b;
        if(op == "*") 
           return a * b;
        if(op == "/")
           return a / b;
        return 0;
    }
    
    int evalRPN(vector<string>& tokens) {
        stack<int> value;
        
        for(auto token: tokens) {
        
            if(token == "+" || token == "-" || token == "/" || token == "*") {
            
                int num2 = value.top();
                value.pop();
          
                int num1 = value.top();
                value.pop();
              
                int res = evaluate(num1, num2, token);
                value.push(res);
            }
            else 
                value.push(stoi(token));
        }
        return value.top();
        
    }
};