public class ShellSort {

    public static void main(String[] args) {
        int[] arr = {30, 2, 10, 4, 6};
        int length = arr.length;

        int tmp = arr.length / 2;
        while (tmp > 0) {
            int i, j;
            for (i = tmp; i < arr.length; i++) {
                int val = arr[i];
                for (j = i - tmp; (j >= 0) && (arr[j] > val); j -= tmp)
                    arr[j + tmp] = arr[j];
                arr[j + tmp] = val;
            }
            tmp /= 2;
        }


        for (int i = 0; i < length; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }
}