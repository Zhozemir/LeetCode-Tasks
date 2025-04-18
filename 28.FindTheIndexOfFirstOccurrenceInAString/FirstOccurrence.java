public class FirstOccurrence {

    public static int strStr(String haystack, String needle){

        int begin = 0;
        int iter = 0;
        int needleIter = 0;

        while(begin <= haystack.length() - needle.length()){

            if(haystack.charAt(iter) == needle.charAt(needleIter)){

                iter++;
                needleIter++;

                if(needleIter == needle.length())
                    return begin;

            }
            else{

                begin++;
                iter = begin;
                needleIter = 0;

            }

        }

        return -1;

    }

}
