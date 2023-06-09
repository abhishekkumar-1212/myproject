public class subarr {
    public static void sub(int arr[]) {
        int sum = 0;
        int max = Integer.MIN_VALUE;

        for (int i = 0; i < arr.length; i++) {
            for (int j = i; j < arr.length; j++) {
                sum = 0; // Basically i initialise my sum inside our loop
                for (int k = i; k <= j; k++) {

                    sum = sum + arr[k]; // Basically index is K and k th index element arr[k]
                    // Above i also print the sum of subarray. By adding their index element

                }
                System.out.print(sum);
                // Now to find the maximum sum of the subarray
                if (max < sum) {
                    max = sum;

                }
                System.out.println(" "); // Basically three loop are working
            }

        }
        System.out.print("THE MAXIMUM SUBARRAY SUM " + max);
    }

    public static void main(String args[]) {
        int arr[] = { 2, 4, 6, 8, 10 };
        sub(arr);

    }
}