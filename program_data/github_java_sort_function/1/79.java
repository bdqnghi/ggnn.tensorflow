public static void insertion(int[] arr, int n) {
        System.out.println("insertion sort");
        for (int j = 1; j < n; j++) {
            int min = arr[j];
            for (int i = j - 1; i >= 0; i--) {
                if (arr[i] > min) {
                    arr[i + 1] = arr[i];
                    arr[i] = min;

                }
            }

        }
        printa(arr, n);
    }