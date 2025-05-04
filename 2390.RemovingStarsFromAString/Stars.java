package removing_start_from_a_string_2390;

import java.util.*;

public class Stars {

    public String removeStars(String s){

        Deque<Character> dq = new ArrayDeque<>();

        for(char ch : s.toCharArray()){

            if(ch == '*' && !dq.isEmpty())
                dq.removeLast();
            else
                dq.addLast(ch);
        }

      StringBuilder sb = new StringBuilder();

        while(!dq.isEmpty())
            sb.append(dq.removeFirst());

        return sb.toString();

        // can be solved with only S.B.
    }

}
