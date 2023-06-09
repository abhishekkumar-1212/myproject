
public class kadane_algoritm {
    public static void sumOfsubarr(int arr[]) {
        // It is not applicable for if all element is negative . It is O(n) time
        // ocmplexity
        int max = arr[0];
        int sum = 0;
        for (int i = 0; i < arr.length; i++) {
            sum = sum + arr[i];
            if (sum < 0) {
                sum = 0;

            }
            // Now compare of my maximum sum with current sum THOSE IS maximum between it
            // stored in our
            // Maximum element
            max = Math.max(sum, max); // Math.max() is the pre defined function

        }

        System.out.print("OUR MAXIMUM IS BY USING KADANE ALGORITM" + max);

    }

    public static void main(String args[]) {
        int arr[] = { -2, -3, 4, -1, -2, 1, 5, -3 };

        sumOfsubarr(arr);
    }

}
