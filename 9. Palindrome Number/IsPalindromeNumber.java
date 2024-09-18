package Easy;

public class IsPalindromeNumber {

    public static int reversedNum(int num) {

        int newNum = 0;
        int lastDigit = 0;

        while (num != 0) {

            if (num >= 10)
                lastDigit = num % 10;
            else
                lastDigit = num;

            newNum = newNum * 10 + lastDigit;

            num /= 10;

        }


        return newNum;

    }

    public static boolean isPalindrome(int x) {

        int numToCheck = reversedNum(x);

        if (x >= 0 && x == numToCheck)
            return true;

        return false;

    }

    public static void main(String[] args) {

        int x = 121;
        System.out.println(isPalindrome(x));

    }

}


