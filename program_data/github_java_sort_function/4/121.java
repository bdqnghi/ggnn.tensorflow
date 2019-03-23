
public static void maxHeapify(int a[], int i, int heapSize) {
    int maxIndex = i;
    if (2 * i + 1 <= heapSize - 1 && a[2 * i + 1] > a[i])
        maxIndex = 2 * i + 1;
    if (2 * i + 2 <= heapSize - 1 && a[i * 2 + 2] > a[maxIndex])
        maxIndex = 2 * i + 2;
    if (maxIndex != i) {
        int tmp = a[maxIndex];
        a[maxIndex] = a[i];
        a[i] = tmp;
        maxHeapify(a, maxIndex, heapSize);
    }
}

public static void heapMain(int a[]) {
    int heapSize = a.length;
    for (int i = a.length - 1; i > 0; i--) {
        int tmp = a[0];
        a[0] = a[i];
        a[i] = tmp;
        heapSize -= 1;
        maxHeapify(a, 0, heapSize); 
    }
}


