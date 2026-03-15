class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int index = 0;
        int size =s.size();
        while(index<size){
            if(s[index]=='('){
                st.push('(');
            }
            else if(s[index]==')'){
                if(st.empty()||st.top()!='('){
                    break;
                }
                st.pop();
            }
            else if(s[index]=='['){
                st.push('[');
            }
            else if(s[index]==']'){
                if(st.empty()||st.top()!='['){
                    break;
                }
                st.pop();
            }
            else if(s[index]=='{'){
                st.push('{');
            }
            else if(s[index]=='}'){
                if(st.empty()||st.top()!='{'){
                    break;
                }
                st.pop();
            }
            index++;
        }
        if(!st.empty()||index<size) return false;
        else return true;
    }
};