package BeginnerTasks;

public class NumberOfStepsToReduceANumberToZero1342 {

    public static int numberOfSteps(int num) {

        int countSteps = 0;

        while(num != 0) {

            if(num % 2 == 0){
                num /= 2;
                countSteps += 1;

            }
            else {
                num -= 1;
                countSteps += 1;

            }
            
        }

        return countSteps;

    }

    public static void main(String[] args) {

        int n = 14;
        System.out.println(numberOfSteps(n));

    }

}
