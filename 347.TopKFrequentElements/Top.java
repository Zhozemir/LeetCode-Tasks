package ArraysAndHashing.top_k_frequent_elements_347;

import java.util.*;

public class Top {

    public int[] topKFrequent(int[]  nums, int k){

        TreeMap<Integer,Integer> tm = new TreeMap<>();

        for(var el : nums){
            tm.put(el, tm.getOrDefault(el, 0) + 1);
        }

        List<Map.Entry<Integer, Integer>> list = new ArrayList<>(tm.entrySet());

        list.sort(Comparator.comparing(Map.Entry::getValue));

        int[] toReturn = new int[k];

        for(int i = 0; i < k; i++){

            toReturn[i] = list.getLast().getKey();
            list.remove(list.getLast());
            
        }

        return toReturn;

    }

    // better than O(n log n)

//    public int[] topKFrequent(int[] nums, int k){
//
//        HashMap<Integer, Integer> hm = new HashMap<>();
//
//        for(var el : nums){
//            hm.put(el, hm.getOrDefault(el, 0) + 1);
//        }
//
//        List<Integer> [] buckets = new List[nums.length + 1];
//
//        for(var entry : hm.entrySet()){
//
//            int num = entry.getKey();
//            int freq = entry.getValue();
//
//            if(buckets[freq] == null){
//                buckets[freq] = new ArrayList<>();
//            }
//
//            buckets[freq].add(num);
//
//        }
//
//        int[] toReturn = new int[k];
//        int index = 0;
//
//        for(int i = buckets.length - 1; i >= 0 && index < k; i--){
//
//            if(buckets[i] != null){
//
//                for(int num : buckets[i]){
//
//                    toReturn[index++] = num;
//
//                    if(index == k)
//                        break;
//                }
//
//            }
//
//        }
//
//        return toReturn;
//
//    }

}
