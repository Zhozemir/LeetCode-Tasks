import java.util.HashSet;

public class MinOperations {

    public int minimumOperations(int[] nums){

        int n = nums.length;

        HashSet<Integer> seen = new HashSet<>();

        for(int i = n - 1; i >= 0; i--){

            if(seen.contains(nums[i]))
                return i / 3 + 1;

            seen.add(nums[i]);


        }

        return 0;

    }


}
