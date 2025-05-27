package divisible_and_non_divisible_sums_difference_2894;

public class Sum {

    public int differenceOfSums(int n , int m) {

        int num1 = 0;
        int num2 = 0;

        for (int i = 0; i <= n; i++) {

            if(i % m != 0)
                num1 += i;
            else
                num2 += i;

        }

        return num1 - num2;
    }

}
