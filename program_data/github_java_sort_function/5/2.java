public static void bubbleSort(double[] bubbleSortArray)
    {
        for (int i = 0; i < SIZE; i++)
            for (int j = 0; j < SIZE - 1 - i; j++)
                if (bubbleSortArray[j] > bubbleSortArray[j + 1])
                    swap(bubbleSortArray, j, j + 1);
    }
    
    
    public static void swap(double[] bubbleSortArray, int i, int j)
    {
        double tempNumber = bubbleSortArray[i];
        bubbleSortArray[i] = bubbleSortArray[j];
        bubbleSortArray[j] = tempNumber; 
    }