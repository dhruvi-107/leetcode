//halhalhahlhalha
class Solution {
public:
    int evalRPN(vector<string>& tokens) 
    {
      stack<int>stk;
      for(string x :tokens)
      {
        if(isnum(x))
        {
            stk.push(stoi(x));
        }
        else
        {
            int a=stk.top();
            stk.pop();
            int b=stk.top();
            stk.pop();
            if(x=="+")
            {
                stk.push(a+b);
            }
            else if(x=="-")
            {
                stk.push(b-a);
            }
            else if(x=="*")
            {
                stk.push(a*b);
            }
            else
            {
                stk.push(b/a);
            }
        }
      }  
      return stk.top();
    }
    bool isnum(string x)
    {
        for(char a : x)
        {
            if(!isdigit(a))
            {
                if(!(x.length()!=1))
                return false;
            }
        }
        return true;
    }
};