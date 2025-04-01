public class BestTime {

    public int maxProfit (int[] prices){

        int minPrice = Integer.MAX_VALUE;
        int maxProfit = 0;

        for (int price : prices){

            if(price < minPrice)
                minPrice = price;

            int currentProfit = price - minPrice;

            if(currentProfit > maxProfit)
                maxProfit = currentProfit;

        }

        return maxProfit;

    }

}
