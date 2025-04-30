package ValidParentheses_20;

import java.util.Stack;

public class ValidParentheses {

    public boolean isOpening(char ch){
        return ch == ('(') || ch == ('{') || ch == ('[');
    }

    public boolean isClosing(char ch){
        return ch == (')') || ch == ('}') || ch == (']');
    }

    public boolean isValid(String s){

        Stack<Character> st = new Stack<>();

        for(var ch : s.toCharArray()){

            if (isOpening(ch))
                st.push(ch);
            else if (isClosing(ch)){

                if(st.isEmpty())
                    return false;

                switch (ch){

                    case ')':

                        if(st.peek().equals('('))
                            st.pop();
                        else
                            return false;

                        break;

                    case'}':

                        if(st.peek().equals('{'))
                            st.pop();
                        else
                            return false;

                        break;

                    case ']':

                        if(st.peek().equals('['))
                            st.pop();
                        else
                            return false;

                        break;

                }

            }

        }

        return st.isEmpty();

    }

}
