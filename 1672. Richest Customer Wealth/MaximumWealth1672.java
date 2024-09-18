package BeginnerTasks;

public class MaximumWealth1672 {

    public int maximumWealth(int[][] accounts) {

        int finalRichestWealth = 0;
        int curr = 0;

        for (int i = 0; i < accounts.length; i++) {

            for (int j = 0; j < accounts[i].length; j++) {
                curr += accounts[i][j];
            }

            if (curr > finalRichestWealth)
                finalRichestWealth = curr;

            curr = 0;

        }

        return finalRichestWealth;

    }

}
