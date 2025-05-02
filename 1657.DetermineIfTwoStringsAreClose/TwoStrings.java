package determine_if_two_strings_are_close_1657;

import java.util.*;

public class TwoStrings {

    public static boolean closeStrings(String word1, String word2){

        if(word1.length() != word2.length())
            return false;

        HashMap<Character, Long> hm1 = new HashMap<>();
        for(var el : word1.toCharArray()){
            hm1.put(el, hm1.getOrDefault(el, 0L) + 1);
        }

        HashMap<Character, Long> hm2 = new HashMap<>();
        for(var el : word2.toCharArray()){
            hm2.put(el, hm2.getOrDefault(el, 0L) + 1);
        }

        TreeSet<Character> hs1 = new TreeSet<>(hm1.keySet());
        TreeSet<Character> hs2 = new TreeSet<>(hm2.keySet());

        if(!hs1.equals(hs2))
            return false;

        PriorityQueue<Map.Entry<Character, Long>> pq1 =
                new PriorityQueue<>(Map.Entry.comparingByValue());
        pq1.addAll(hm1.entrySet());

        PriorityQueue<Map.Entry<Character, Long>> pq2 =
                new PriorityQueue<>(Map.Entry.comparingByValue());
        pq2.addAll(hm2.entrySet());

        while(pq1.size() != 0){
            if(!pq1.peek().getValue().equals(pq2.peek().getValue()))
                return false;

            pq1.poll();
            pq2.poll();

        }

        return true;

    }
    
}
