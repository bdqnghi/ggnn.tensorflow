public static void bubbleSort(int[] list, int n) {
        int i, j, tmp;
        
        for (i = n - 1; i > 0; i--) {
            System.out.print("gg");
            for (j = 0; j < i; j++) {
                if (list[j] > list[j + 1]) {
                    tmp = list[j];
                    list[j] = list[j + 1];
                    list[j + 1] = tmp;
                }
            }
        }
    }
}