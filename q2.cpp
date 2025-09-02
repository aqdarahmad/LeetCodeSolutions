// Valid Parentheses

#include<iostream>
#include<stack>
using namespace std;

bool isvalid(string s)
{

    map<char , char>map1;
    map1['('] = ')';
    map1['{'] = '}';
    map1['['] = ']';

    stack<char>st;

    for(char c : s)

    {
       
        if(map1.count(c))
        {
          st.push(s);
        }

        else

        {
           if(st.empty() ! map1[st.top()]!= c)
           return false ;
           st.pop();
        }
     
    }

    return st.empty();


}
