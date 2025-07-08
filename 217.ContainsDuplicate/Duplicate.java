package contains_duplicate_217;

import java.util.HashMap;
import java.util.HashSet;

public class Duplicate {

    public boolean containsDuplicate(int[] nums){

        HashSet<Integer> hs = new HashSet<>();

        for(int el : nums){

            if(hs.contains(el))
                return true;

            hs.add(el);
        }

        return false;

    }

}
