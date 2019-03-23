public void bubbleSort(int[] unsorted) 
    {
        boolean swap = false;
        int tempSwap;
        do
        {
            swap = false;
            
            for(int i=0; i< unsorted.length-1; i++)
            {
                if(unsorted[i] > unsorted[i+1]) {
                    tempSwap = unsorted[i];
                    unsorted[i] = unsorted[i+1];
                    unsorted[i+1]=tempSwap;
                    swap = true;    
                }
            }
        }
        while(swap);
    }
    