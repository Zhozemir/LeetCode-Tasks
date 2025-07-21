package delete_characters_to_make_fancy_string_1957;

public class FancyString {

    public static String makeFancyString (String s){

        StringBuilder result = new StringBuilder();

        for(char ch : s.toCharArray()){

            int len = result.length();

            if(len >= 2 && ch == result.charAt(len - 1) && ch == result.charAt(len - 2))
                continue;

            result.append(ch);

        }

        return result.toString();

    }

}
