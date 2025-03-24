import java.util.Arrays;

public class CountDaysWithoutMeetings {

    public static int countDays(int days, int[][] meetings){

        if(days <= 0)
            return 0;

        if(meetings == null || meetings.length == 0)
            return days;

        Arrays.sort(meetings, (a, b) -> Integer.compare(a[0], b[0]));

        int mergedStart = meetings[0][0];
        int mergedEnd = meetings[0][1];

        int totalMeetingDays = 0;

        for (int i = 1; i < meetings.length; i++){

            int currentStart = meetings[i][0];
            int currentEnd = meetings[i][1];

            if(currentStart <= mergedEnd + 1)
                mergedEnd = Math.max(mergedEnd, currentEnd);
            else {

                totalMeetingDays += (mergedEnd - mergedStart + 1);

                mergedStart = currentStart;
                mergedEnd = currentEnd;

            }

        }

        totalMeetingDays += (mergedEnd - mergedStart + 1);

        if(totalMeetingDays > days)
            totalMeetingDays = days;

        return days - totalMeetingDays;

    }

}
