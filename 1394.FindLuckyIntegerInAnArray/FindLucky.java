import java.util.HashMap;

public class FindLucky {

    public int findLucky(int[] arr){

        int luckyInt = -1;

        HashMap<Integer, Integer> hm = new HashMap<>();

        for(int el : arr)
            hm.put(el, hm.getOrDefault(el, 0) + 1);

        for(var pair : hm.entrySet()){

            int currKey  = pair.getKey();

            if(currKey == pair.getValue()){

                if(currKey > luckyInt)
                    luckyInt = currKey;

                }

            }

        return luckyInt;

    }

}
