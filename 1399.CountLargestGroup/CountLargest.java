package CountLargestGroup_1399;

import java.util.HashMap;

public class CountLargest {

    public int sumOfDigits(int n){

        int sum = 0;

        while(n != 0){

            int lastDigit = n % 10;
            sum += lastDigit;
            n /= 10;

        }

        return sum;

    }

    public int countLargestGroup(int n){

        HashMap<Integer, Integer> hm = new HashMap<>();

        int maxSize = 0;
        int maxCount = 0;

        for(int i = 1; i <= n; i++){

            int sum = sumOfDigits(i);
            int newSize = hm.getOrDefault(sum, 0) + 1;
            hm.put(sum, newSize);

            if(newSize > maxSize){

                maxSize = newSize;
                maxCount = 1;

            }
            else if(newSize == maxSize)
                maxCount++;

        }

        return maxCount;

    }

}
