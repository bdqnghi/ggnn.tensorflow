  public static void bubblesort()
    {
        int temp;
        for(int i=0;i<=index-1;i++)
        for(int j=0;j<=index-1-i;j++)
        if(array[j]>array[j+1])
        {
            temp=array[j];
            array[j]=array[j+1];
            array[j+1]=temp;
        }
    }