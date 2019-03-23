    public static void sort(int a[], int low, int hight) {
        int i, j, index;
        if (low > hight) {
            return;
        }
        i = low;
        j = hight;
        index = a[i]; 
        int loop = 0;
        while (i < j) { 
            while (i < j && a[j] >= index) {
                j--;

            }

            if (i < j) {

                a[i++] = a[j];

            }


            while (i < j && a[i] < index) {
                i++;

            }

            if (i < j) 
            {
                a[j--] = a[i];
            }

            System.out.println("i is " + i);
            System.out.println("j is " + j);
            loop++;
            System.out.println(loop+" loop " + Arrays.toString(a));

        }
        System.out.println("===");

        a[i] = index;
        sort(a, low, i - 1); 
        sort(a, i + 1, hight); 

    }

    public static void quickSort(int a[]) {
        sort(a, 0, a.length - 1);
    }