class Solution {
public:
    bool isValid(string s) {
        stack <char> st;
        if(s.empty()){
            return 0;
        }
        for(int i=0;i<s.size();i++)
        {
            if(s[i] == '(' || s[i] == '[' || s[i] == '{')
           { 
            st.push(s[i]);
            }
           else{
            if(st.empty()) return 0;
            if ((s[i] == ')' && st.top() == '(') ||
    (s[i] == ']' && st.top() == '[') ||
    (s[i] == '}' && st.top() == '{'))
          {
            st.pop();
            continue;
           }else return 0;
        }
    }
    if(st.empty()){
        return 1;
    }
    return 0;
    }  
};