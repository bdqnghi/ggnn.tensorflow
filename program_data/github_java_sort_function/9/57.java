    public static void swap (int pos1, int pos2) {
        
        int temp = nums[pos1];
        nums[pos1] = nums[pos2];
        nums[pos2] = temp;
        
    } 

    public static void selectionSort () {
        
        int endOfSortedRegion;
        int j;
        int minLocation;
        
        for (endOfSortedRegion = 0; endOfSortedRegion < MAXSIZE - 1; endOfSortedRegion++) {
            
            minLocation = endOfSortedRegion;
            
            for (j = endOfSortedRegion + 1; j < MAXSIZE; j++)
                
                if (nums[j] < nums[minLocation])
                    minLocation = j;

                
            if (minLocation != endOfSortedRegion)
                swap(minLocation, endOfSortedRegion);
        }

    } 