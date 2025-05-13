package find_the_difference_of_two_arrays_2215;

import java.util.ArrayList;
import java.util.HashSet;
import java.util.List;
import java.util.Set;

public class Difference {

    public List<List<Integer>> findDifference(int[] nums1, int[] nums2){

        Set<Integer> set1 = new HashSet<>();
        for(int el : nums1)
            set1.add(el);

        Set<Integer> set2 = new HashSet<>();
        for(int el : nums2)
            set2.add(el);

        List<Integer> diff1 = new ArrayList<>();
        for(int el : set1){

            if(!set2.contains(el))
                diff1.add(el);

        }

        List<Integer> diff2 = new ArrayList<>();
        for(int el : set2){

            if(!set1.contains(el))
                diff2.add(el);

        }

//        List<List<Integer>> result = new ArrayList<>();
//        result.add(diff1);
//        result.add(diff2);
//        return result;

        return List.of(diff1, diff2);

    }

}
