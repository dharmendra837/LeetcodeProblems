class Solution {
public:
    bool isValid(string s) {
        stack<int>stk;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
               {
                 stk.push('(');  
               }
            else if(s[i]==')')
                    {
                        if(stk.empty())
                        {
                            return false;
                        }
                       if(stk.top()!='(')
                       {
                           return false;
                       }
                else
                {
                    stk.pop();
                }
                    }
            
             if(s[i]=='[')
               {
                 stk.push('[');  
               }
            else if(s[i]==']')
                    {
                        if(stk.empty())
                        {
                            return false;
                        }
                       if(stk.top()!='[')
                       {
                           return false;
                       }
                else
                {
                    stk.pop();
                }
                    }
            
             if(s[i]=='{')
               {
                 stk.push('{');  
               }
            else if(s[i]=='}')
                    {
                        if(stk.empty())
                        {
                            return false;
                        }
                       if(stk.top()!='{')
                       {
                           return false;
                       }
                else
                {
                    stk.pop();
                }
                    }
        }
        if(!stk.empty())
        {
            return false;
        }
        return true;
    }
};