    for(int i=0;i<array.length;i++)
        {
            int minIndex = findMinIndex(array,i,array.length-1);
            int temp = array[minIndex];
            array[minIndex] = array[i];
            array[i] = temp;
        }
    }
    public static int findMinIndex(int[] array,int start , int end){
        int index =0;
        int min = array[start];
        for(int i=start ; i<=end ;i++)
        {
            if(array[i] <= min)
            {
                min = array[i];
                index = i;
            }
        }
        return index;
    }