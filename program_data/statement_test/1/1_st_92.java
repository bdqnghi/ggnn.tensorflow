public static void insertionSort()
    
    {
    int i = 1;

    while 
        
        (i < arr.length)
    {
        int j = i;
        while
        
        (j > 0)
        {
        if (arr[j].key < arr[j-1].key)
        {
            InsertionSortNode tmp = arr[j];
            arr[j] = arr[j-1];
            
        j = j - 1;
        }
        i = i + 1;
    }
    }

    