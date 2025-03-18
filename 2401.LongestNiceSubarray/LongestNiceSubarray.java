package com.example.springDemo;

public class LongestNiceSubarray {

    public int longestNiceSubarray(int[] nums) {

        int n = nums.length;
        int left = 0, maxLength = 0, mask = 0;

        for (int right = 0; right < n; right++){

            while ((mask & nums[right]) != 0) {

                mask ^= nums[left];
                left++;

            }

            mask |= nums[right];
            maxLength = Math.max(maxLength, right - left + 1);

        }

        return maxLength;

    }

}
