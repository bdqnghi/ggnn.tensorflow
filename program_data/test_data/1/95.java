import java.util.Scanner;
import java.util.Arrays;


class TestClass {
  static int[] sort (int[] arr, int length) {
    int key, j;

    for (int pos = 1; pos < length; ++pos) {
      key = arr[pos];
      j = pos - 1;

      while (j >= 0 && arr[j] > key) {
        arr[j+1] = arr[j];
        j--;
      }

      arr[j+1] = key;
    }

    return arr;
  }


  public static void main (String[] args) {
    Scanner sc = new Scanner(System.in);

    int length = sc.nextInt();

    int[] arr = new int[length];

    for (int pos=0; pos < length; ++pos)
      arr[pos] = sc.nextInt();

    int[] sorted = sorted(Arrays.copyOf(arr, length), length);

    for (int pos=0; pos < length; ++pos) {
      int key = arr[pos];

      for (int j=0; j < length; ++j) {
        if (sorted[j] == key)
          System.out.println(j+1 + " ");
      }
    }
  }
}
