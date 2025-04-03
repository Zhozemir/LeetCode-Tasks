public class TripletsII {

    public long maximumTripletValue(int[] nums) {

        int max = Integer.MIN_VALUE;
        int diff = 0;
        long res = 0;

        for (int i = 0; i < nums.length; i++){

            max = Math.max(max, nums[i]);

            if(i >= 2)
                res = Math.max(res, (long)diff * nums[i]);

            if(i >= 1)
                diff = Math.max(diff, max - nums[i]);


        }

        return res;

    }

}
