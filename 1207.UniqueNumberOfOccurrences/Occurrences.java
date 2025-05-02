package unique_number_of_occurrences_1207;

import java.util.HashMap;
import java.util.HashSet;

public class Occurrences {

    public boolean uniqueOccurrences(int[] arr){

        HashMap<Integer, Integer> hm = new HashMap<>();

        for(int el : arr){
            hm.put(el, hm.getOrDefault(el, 0) + 1);
        }

        HashSet<Integer> hs = new HashSet<>(hm.values());

        return hm.size() == hs.size();

    }

}
