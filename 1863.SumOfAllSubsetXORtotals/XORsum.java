public class XORsum {

    public int subsetXORSum(int[] nums){

        int n = nums.length;
        int sum = 0;

        for(int mask = 0; mask < (1<<n); mask++){

            int subsetXOR = 0;

            for(int i = 0; i < n; i++)
                if((mask & (1 << i)) != 0)
                    subsetXOR ^= nums[i];

            sum += subsetXOR;

        }

        return sum;

    }

}
