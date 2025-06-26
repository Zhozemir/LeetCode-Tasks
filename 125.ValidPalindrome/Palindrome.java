package valid_palindrome_125;

// solution without using inbuilt functions

public class Palindrome {

    public boolean isAlphaNumeric(char ch){
        return (ch >= '0' && ch <= '9') || (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
    }

    public boolean isPalindrome(String s){

        int begin = 0;
        int end = s.length() - 1;

        while(begin <= end){

            char ch1 = s.charAt(begin);
            char ch2 = s.charAt(end);

            if (ch1 >= 'A' && ch1 <= 'Z')
                ch1 = (char)(ch1 + 32);

            if(ch2 >= 'A' && ch2 <= 'Z')
                ch2 = (char)(ch2 + 32);

            if(!isAlphaNumeric(ch1)){

                begin++;
                continue;

            }

            if(!isAlphaNumeric(ch2)){

                end--;
                continue;

            }

            if(ch1 != ch2)
                return false;

            begin++;
            end--;

        }

        return true;

    }

}
