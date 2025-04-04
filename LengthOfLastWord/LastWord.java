import java.lang.reflect.Array;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class LastWord {

    public static int lengthOfLastWord(String s){

        List<String> list = new ArrayList<>(Arrays.asList(s.trim().split("\\s+")));

        return list.getLast().length();

    }

}
