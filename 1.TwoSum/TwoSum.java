package two_sum_1;

import java.util.HashMap;
import java.util.HashSet;

public class TwoSum {

    public int[] twoSum(int[] nums, int target) {

        HashMap<Integer,Integer> hm = new HashMap<>();

        int[] toReturn = new int[2];

        for(int i = 0; i < nums.length; i++){

            if(hm.containsKey(target - nums[i])){

                toReturn[0] = hm.get(target - nums[i]);
                toReturn[1] = i;
                break;

            }

            hm.put(nums[i], i);

        }

        return toReturn;

    }

}
