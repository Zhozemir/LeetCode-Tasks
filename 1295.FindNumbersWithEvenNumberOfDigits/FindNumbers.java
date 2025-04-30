package FindNumbersWithEvenNumberOfDigits_1295;

public class FindNumbers {

    public boolean evenNumberOfDigits(int n){

        int counter = 0;

        while(n != 0){

            counter++;
            n /= 10;

        }

        return counter % 2 == 0;

    }

    public int findNumber(int[] nums){

        int counter = 0;

            for(int el : nums){

                if(evenNumberOfDigits(el))
                    counter++;

            }

            return counter;

    }

}
