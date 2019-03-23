public static void sort(Comparable[] data) {
        long start = System.nanoTime();
        int len = data.length;
        for (int i = 1; i < len; i++) {
            Comparable c = data[i];
            int position = 0;
            for (position = i; position > 0; position--) {
                if (c.compareTo(data[position - 1]) < 0) {
                    data[position] = data[position - 1];
                } else {
                    break;
                }
            }
            data[position] = c;
        }
        long end = System.nanoTime();
        System.out.println("\nInsertionSort Execute time:" + (end - start));
    }
}