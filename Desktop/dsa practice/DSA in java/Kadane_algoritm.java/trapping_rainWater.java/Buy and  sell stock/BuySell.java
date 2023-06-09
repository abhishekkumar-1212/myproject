public class BuySell {

    public static int buysell(int prices[]) { // I take the int type to take my in return maximum profit
        int buyprice = prices[0];
        int maxprofit = 0; // if there is no profit then we return 0;

        for (int i = 1; i < prices.length; i++) {
            if (buyprice < prices[i]) { // Condition of profit scenrio (prices[i] represent the selling price)
                int profit = prices[i] - buyprice;
                maxprofit = Math.max(maxprofit, profit); // It uodate the value of maximum profit
            } else {
                prices[i] = buyprice;
            }
        }

        return maxprofit;

    }

    public static void main(String args[]) {
        int prices[] = { 1, 2, 5, 6, 7 }; // This price is given in the form of array
        System.out.println(buysell(prices));

    }

}