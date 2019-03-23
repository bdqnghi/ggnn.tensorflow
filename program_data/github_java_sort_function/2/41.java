  public int[] mergeSort(int[] a){
        if (a.length <= 1) return a;
        int middle = a.length/2;
        return merge(mergeSort(Arrays.copyOfRange(a, 0, middle)), mergeSort(Arrays.copyOfRange(a,middle,a.length)));

    }

    public int[] merge(int[] a1, int[] a2) {
        int a = 0;
        int b = 0;
        arr = new int[a1.length+a2.length];
        for(int i = 0; i < a1.length+a2.length; i++) {
            if (a < a1.length && b < a2.length) {
                if (a1[a] <= a2[b]) arr[i] = a1[a++];
                else arr[i] = a2[b++];
            }
            else if (a < a1.length) arr[i] = a1[a++];
            else arr[i] = a2[b++];
        }
        return arr;
    }

    public static void main(String[] args){
        MergeSort mergeSort = new MergeSort(30);
        mergeSort.mergeSort(mergeSort.a);
        for (int i = 0; i < mergeSort.a.length; i++) {
            System.out.print(mergeSort.a[i] + " ");
        }
        System.out.println();
         for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
    }