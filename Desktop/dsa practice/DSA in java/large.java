public class large {

    public static void number(int arr[]) {
        for (int i = 0; i < arr.length; i++) {
            for (int j = i + 1; j < arr.length; j++) {
                System.out.print("(" + arr[i] + "," + arr[j] + ")");
            }
            System.out.println();
        }
    }

    public static void main(String args[]) {
        int arr[] = { 1, 5, 6, 7, 9 };
        number(arr);
    }

}