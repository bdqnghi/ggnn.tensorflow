
    private void shellsort(int[] a) {
        int d = a.length / 2;
        while (true) {
            for (int i = 0; i < a.length; i++) {
                for (int j = i; j + d < a.length; j += d) {
                    int temp;
                    if (a[j] > a[j + d]) {
                        temp = a[j];
                        a[j] = a[j + d];
                        a[j + d] = temp;
                    }
                }
            }
            d--;
            if (d == 1) {
                break;
            }
        }
    }

