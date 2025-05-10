package find_the_middle_index_in_array_1991;

public class MiddleIndex {

    public int findMiddleIndex(int[] nums){

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
