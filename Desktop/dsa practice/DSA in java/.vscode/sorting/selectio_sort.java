public class selectio_sort {

    public static void sort(int arr[]) {
        for (int i = 0; i < arr.length - 1; i++) {
            int minpos = i; // minpose=arr[0];
            for (int j = i + 1; j < arr.length; j++) {
                if (arr[minpos] > arr[j]) {
                    minpos = j; // Problem in concept

                }
            }
            int temp = arr[minpos]; // Because we need position to swap elements .
            arr[minpos] = arr[i];
            arr[i] = temp;

        }
    }

    public static void main(String args[]) {
        int arr[] = { 5, 3, 2, 6, 1 };
        sort(arr);
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i]);
        }
    }

}
