
// Bubble sort is not best algoritm to sort because is time compexity is O(n^2).

public class bubble_sort { // problem
    public static void sort(int arr[]) {

        for (int i = 0; i < arr.length - 1; i++) {
            for (int j = 0; j < arr.length - 1 - i; j++) {
                if (arr[j] > arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;

                }

            }
        }

    }

    // Now to print the array by using another function

    public static void main(String args[]) {
        int arr[] = { 1, 5, 3, 2 };
        sort(arr);
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i]);
            System.out.print(" ");
        }

    }

}
