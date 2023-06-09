import java.util.*;

public class Array {
    public static void main(String args[]) {
        /*
         * int arr[]=new int[50]; // It is the way to take array size in java.
         * int num[]={1,2,3};
         * String name[]={};
         */
        int marks[] = new int[100];

        // To find marks length
        System.out.println("THE LENGTH OF ARRAY" + marks.length);
        Scanner sc = new Scanner(System.in);
        marks[0] = sc.nextInt();
        marks[1] = sc.nextInt();
        marks[2] = sc.nextInt();

        System.out.println("Phys" + marks[0]);
        System.out.println("Chem" + marks[1]);
        System.out.println("Math" + marks[2]);

        int percentage = (marks[0] + marks[1] + marks[2]) / 3;
        System.out.println("Percentage" + percentage);

    }
}