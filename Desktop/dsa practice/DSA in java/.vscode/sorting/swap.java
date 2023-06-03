public static void bubbleSort(int[] arr) {
    int n = arr.length;
    boolean swapped;
    int swapCount = 0;

    do {
        swapped = false;
        for (int i = 1; i < n; i++) {
            if (arr[i - 1] > arr[i]) {
                int temp = arr[i - 1];
                arr[i - 1] = arr[i];
                arr[i] = temp;
                swapped = true;
                swapCount++;
            }
        }
        n--;
    } while (swapped);

    if (swapCount == 0) {
        System.out.println("Array is already sorted");
    }
}
