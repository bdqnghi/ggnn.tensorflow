public static void bsort(int[] array)
    {
        int counter=1;
        while(counter<=array.length)
        {
            for(int i=0;i<array.length-counter;i++)
            {
                if(array[i+1]<array[i])
                {
                    int temp=array[i+1];
                    array[i+1]=array[i];
                    array[i]=temp;
                }
                    
            }
            counter++;
        }
    }