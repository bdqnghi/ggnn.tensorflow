public static void sortWithMetaData(Vector sort, Vector metaData) {
        
        Object sortArrayTemp[] = sort.toArray();
        double sortArray[] = new double[sortArrayTemp.length];
        for (int i=0; i<sortArrayTemp.length; i++)
            sortArray[i] = ((Double)sortArrayTemp[i]).doubleValue();
        
        Object metaDataArrayTemp[] = metaData.toArray();
        String metaDataArray[] = new String[sortArrayTemp.length];
        for (int i=0; i<metaDataArrayTemp.length; i++)
            metaDataArray[i] = (String)metaDataArrayTemp[i];
        
        doQuickSort(0, sortArray.length-1, sortArray, metaDataArray);
        
        sort.clear();
        metaData.clear();
        
        for (int i=0; i<sortArray.length; i++) {
            sort.addElement(new Double(sortArray[i]));
            metaData.addElement(metaDataArray[i]);
        }
    }
    
    
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
    