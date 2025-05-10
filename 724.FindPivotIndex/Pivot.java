package find_pivot_index_724;

public class Pivot {

    public int pivotIndex(int[] nums){

        int totalSum = 0;

        for(int el : nums)
            totalSum += el;

        int leftSum = 0;

        for(int i = 0; i < nums.length; i++){

            if(leftSum == totalSum - leftSum - nums[i])
                return i;

            leftSum += nums[i];

        }

        return -1;

    }

}
