package BeginnerTasks;

public class RomanToInt {

    public static int romanToInt(String s){

        char[] chNum = s.toCharArray();

        int result = 0;

        for (int i = 0; i < chNum.length; i++) {

            switch (chNum[i]){

                case 'I':

                    if(i+1 < chNum.length && chNum[i+1] == 'V') {

                        result += 4;
                        i++;

                    }
                    else if(i+1 < chNum.length && chNum[i+1] == 'X'){

                        result += 9;
                        i++;

                    }
                    else
                        result += 1;

                    break;

                case 'V':

                    result += 5;
                    break;

                case 'X':

                    if(i+1 < chNum.length && chNum[i+1] == 'L'){

                        result += 40;
                        i++;

                    }
                    else if(i+1 < chNum.length && chNum[i+1] == 'C'){

                        result += 90;
                        i++;

                    }
                    else
                        result += 10;

                    break;

                case 'L':

                    result += 50;
                    break;

                case 'C':

                    if(i+1 < chNum.length && chNum[i+1] == 'D'){

                        result += 400;
                        i++;

                    }
                    else if(i+1 < chNum.length && chNum[i+1] == 'M'){

                        result += 900;
                        i++;
                    }
                    else
                        result += 100;

                        break;

                case 'D':

                    result += 500;
                    break;

                case 'M':

                    result += 1000;
                    break;

            }

        }

        return result;

    }

    public static void main(String[] args) {

        String s = "MCMXCIV";

        int num = romanToInt(s);

        System.out.println(num);

    }


}
