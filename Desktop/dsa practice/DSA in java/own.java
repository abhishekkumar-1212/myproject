public class own { // By Creating the maximum sum of subarray

    // Problem
    public static void maxsum(int arr[]) {

        int sum = 0;
        int max = Integer.MIN_VALUE;
        for (int i = 0; i < arr.length; i++) {

            for (int j = i; j < arr.length; j++) {

                sum = 0;

                for (int k = i; k <= j; k++) {
                    sum = sum + arr[k];

                }
                System.out.print(sum);
                if (max < sum) {
                    max = sum;
                }

                System.out.println(" ");

            }
        }
        System.out.print("The maximum sum is" + sum);
    }

    public static void main(String args[]) {
        int arr[] = { 1, -2, 6, -1, 4 };
        maxsum(arr);
    }

}
