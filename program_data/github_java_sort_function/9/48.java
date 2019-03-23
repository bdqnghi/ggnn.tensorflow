    public static void selectionSortLargest(double[] array)
    {
        for (int r = array.length - 1; r > 0; --r)
        {
            int largestElementIndex = r;
            
            for (int l = 0; l < r; ++l)
            {
                if (array[l] > array[largestElementIndex])
                    largestElementIndex = l;
            }
            
            
            double temp = array[r];
            array[r] = array[largestElementIndex];
            array[largestElementIndex] = temp;
        }
    }