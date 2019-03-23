public static void sort(Comparable[] data) throws Exception {
        long start = System.nanoTime();
        int len = data.length;
        int minIndex = 0;
        for(int i=0;i<len;i++)
        {
            minIndex=i;
            for(int j=i;j<len;j++)
            {
                if(data[minIndex].compareTo(data[j])>0)
                {
                    minIndex = j;
                }
            }
            SortUtil.swap(data, i, minIndex);
        }
        long end = System.nanoTime();
        System.out.println("\nSelectionSort Execute time:"+(end-start));
    }