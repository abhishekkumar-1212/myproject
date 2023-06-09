public class Reverse_array {

    public static void reverse(int arr[]) {
        int start = 0;
        int end = arr.length - 1;
        while (start < end) {

            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp; // Basically we swap the two array BY first from end index to using
            // Temporary container .
            start++;
            end--;
        }

    }

    public static void main(String args[]) {

        int arr[] = { 7, 9, 4, 6, 3 };

        reverse(arr);
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();

    }
}