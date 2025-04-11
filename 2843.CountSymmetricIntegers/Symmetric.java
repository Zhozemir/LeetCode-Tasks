public class Symmetric {

    public static int getFirstHalfSum(Integer num){

        String s = num.toString();

        int counter = 0;

        for(int i = 0; i < s.length()/2; i++){
            counter += s.charAt(i) - '0';
        }

        return counter;

    }

    public static int getSecondHalfSum(Integer num){

        String s = num.toString();

        int counter = 0;

        for(int i = s.length() / 2; i < s.length(); i++){

            counter += (int)s.charAt(i) - '0';

        }

        return counter;

    }

    public static boolean isSymmetric(int num){

        String s = Integer.toString(num);

        if(s.length() % 2 != 0)
            return false;

        int firstHalf = getFirstHalfSum(num);
        int secondHalf = getSecondHalfSum(num);

        return firstHalf == secondHalf;

    }

    public static int countSymmetricIntegers(int low, int high){

        int counter = 0;

            for(int i = low; i <= high; i++){

                if(isSymmetric(i))
                    counter++;

            }

            return counter;

    }

    public static void main(String[] args) {

        System.out.println(countSymmetricIntegers(1200, 1230));

    }

}
