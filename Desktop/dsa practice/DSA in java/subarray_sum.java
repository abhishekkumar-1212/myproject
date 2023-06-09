public class subarray_sum {
    public static void sumofsubarray(int arr[]) {

        for (int i = 0; i < arr.length; i++) {
            int start = i;

            for (int j = i; j < arr.length; j++) {
                int end = arr.length - 1; // Problem
                for (int k = start; k <= end; k++) {
                    System.out.print(arr[k]);
                }

            }
        }
    }

    public static void main(String args[]) {
        int arr[] = { 1, 4, 65, 7 };
        sumofsubarray(arr);
    }
}
