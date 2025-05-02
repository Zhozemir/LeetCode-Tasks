package kth_largest_element_in_an_array_215;

import java.util.Collections;
import java.util.PriorityQueue;

public class LargestElement {

    public int findKthLargest(int[] nums, int k){

        PriorityQueue<Integer> pq = new PriorityQueue<>(Collections.reverseOrder());

        for(int num : nums)
            pq.add(num);

        for (int i = 1; i < k; i++)
            pq.poll();

        return pq.peek();

    }

}
