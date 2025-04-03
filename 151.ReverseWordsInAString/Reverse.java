import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.List;

public class Reverse {

    public static String reverseWords(String s){

        List<String> list = new ArrayList<>(Arrays.asList(s.trim().split("\\s+")));
        Collections.reverse(list);
        s = String.join(" ", list);

        return s;
    }

    public static void main(String[] args) {

        String s = new String("a good   example");

        System.out.println(reverseWords(s));

    }
    
}
