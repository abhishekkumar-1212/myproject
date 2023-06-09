public class Largest_no {
    public static int largest(int arr[]) {

        int index = (arr.length - 1);
        
        int large = arr[index];
        for (int i = arr.length - 1; i >= 0; i--) {
            if (large < arr[i]) {
                large = arr[i];
            }
        }
        return large;

    }

    public static void main(String args[]) {
        int arr[] = { 23, 35, 66, 6 };
        System.out.println(largest(arr));
    }
}
