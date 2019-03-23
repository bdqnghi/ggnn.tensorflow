public static void Sort(int[] array,int num) 
    { 
        int[] workArray = new int[array.length]; 
        Sort(array, workArray, 0, num); 
    } 
    private static void Sort(int[] array, int[] workArray, int start, int count)
    { 
        if (count < 2) 
            return; 
      
        Sort(array, workArray, start, count / 2); 
        Sort(array, workArray, start + count / 2, count - count / 2); 
        Merge(array, workArray, start, count / 2, start + count / 2, count - count / 2); 
    } 
      
    private static void Merge(int[] array, int[] workArray, int leftStart, int leftCount, int rightStart, int rightCount) 
    { 
        int i = leftStart, j = rightStart, leftBound = leftStart + leftCount, rightBound = rightStart + rightCount, index = leftStart; 
        while (i < leftBound || j < rightBound) 
        { 
            if (i < leftBound && j < rightBound) 
            { 
                if (array[j] < array[i]) 
                    workArray[index] = array[j++]; 
                else
                    workArray[index] = array[i++]; 
            } 
            else if (i < leftBound) 
                workArray[index] = array[i++]; 
            else
                workArray[index] = array[j++]; 
            ++index; 
        } 
        for (i = leftStart; i < index; ++i) 
            array[i] = workArray[i]; 
    }