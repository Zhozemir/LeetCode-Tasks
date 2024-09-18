package BeginnerTasks;

public class RunningSumOf1dArray1480 {


    public static int[] runningSum (int[] nums) {

        int currentSum = nums[0];

        for (int i = 1; i < nums.length; i++) {

            currentSum += nums[i];
            nums[i] = currentSum;


        }

        return nums;

    }


    public static void main(String[] args) {
        int[] nums = new int[]{1,1,1,1,1};

        int[] result = runningSum(nums);

        for (int num : result) {
            System.out.print(num + " ");
        }
    }
}

