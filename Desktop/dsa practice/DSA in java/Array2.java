
import java.util.*;

public class Array2 {
    public static void main(String args[]) {
        int n = 5;
        int[] arr = new int[] { 1, 2, 3, 4 };
        for (int i = 0; i < n; i++) {

            System.out.print(arr[i]);
        }
        System.out.println();
        System.out.print("Array after reverse ");

        for (int i = n; i > 0; i--) {
            System.out.print(arr[i]);
        }
    }
}
