public class subarray {
    public static void subarr(int arr[]) {
        int total_size = 0;
        for (int i = 0; i < arr.length; i++) {
            int start = i;
            for (int j = i; j < arr.length; j++) {
                int end = j;
                for (int k = start; k <= end; k++) {
                    System.out.print(arr[k] + " ");
                }
                total_size++; // problem.
                System.out.println();

            }
            System.out.println();

        }
        System.out.println("total subarray=" + total_size);
    }

    public static void main(String args[]) {
        int arr[] = { 2, 8, 9, 5 };
        subarr(arr);

    }
}
