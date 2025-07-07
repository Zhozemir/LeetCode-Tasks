package find_the_kth_character_in_string_game_1;

public class FindKth {

    public static char kthCharacter (int k) {

        StringBuilder word = new StringBuilder("a");

        StringBuilder toAppend = new StringBuilder();

        while(word.length() < k){

            for(int i = 0; i < word.length(); i++){

                if(word.charAt(i) == 'z')
                    toAppend.append('a');

                toAppend.append((char)(word.charAt(i) + 1));

            }

            word.append(toAppend);
            toAppend.delete(0, toAppend.length());

        }

        return word.toString().charAt(k - 1);

    }

    public static void main(String[] args) {

        System.out.println(kthCharacter(5));

    }

}
