static void doQuickSort(int leftBorder, int rightBorder, double[] sortArray, String[] metaDataArray) {
        int i, j;               
        double x;               
        double swapTempDouble;  
        String swapTempString;  

        i = leftBorder;
        j = rightBorder;
        x = sortArray[(leftBorder+rightBorder)/2];
        do {
            while (sortArray[i] > x) 
                i++;
            while (x > sortArray[j])
                j--;
            if (i<=j) {
                
                swapTempDouble = sortArray[i]; 
                sortArray[i] = sortArray[j];
                sortArray[j] = swapTempDouble;
                
                swapTempString = metaDataArray[i];
                metaDataArray[i] = metaDataArray[j];
                metaDataArray[j] = swapTempString;
                i++;
                j--;
            }
        }
        while (!(i > j));
        if ( leftBorder < j ) doQuickSort(leftBorder, j, sortArray, metaDataArray);
        if ( i < rightBorder ) doQuickSort(i, rightBorder, sortArray, metaDataArray);
    }
    