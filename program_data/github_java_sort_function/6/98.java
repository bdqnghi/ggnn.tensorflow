@Override
    public void sort(Integer[] arr, Integer sortOrder) {
        long startTime = System.nanoTime();
        System.out.println("Before Sorting");
        SortingHelper.printArray(arr);
        int[] countArr = new int[10]; 
        int max = Collections.max(Arrays.asList(arr));
        Integer[] aux = new Integer[arr.length];

        int passes = 1;
        while (max > 0) { 

            for (Integer num : arr) {
                int index = (num % (passes * 10)) / passes;
                countArr[index]++;
            }

            countArr[0]--;
            
            for (int i = 1; i < 10; i++) {
                countArr[i] = countArr[i] + countArr[i - 1];
            }

            for (int i = arr.length - 1; i >= 0; i--) {
                int index = (arr[i] % (passes * 10)) / passes;
                int value = countArr[index];
                aux[value] = arr[i];
                countArr[index]--;
            }
            arr = Arrays.copyOf(aux, arr.length);
            Arrays.fill(countArr, 0);
            passes = passes * 10;
            max = max / 10;
        }

        System.out.println("After Sorting");
        SortingHelper.printArray(arr);
        SortingHelper.printStats(startTime);
    }
}