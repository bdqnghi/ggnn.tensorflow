public void doMergeSort(int array[])
    {
        numbers=array;
        helper=new int[array.length];
        mergeSort(0,array.length-1);
    }
    public void mergeSort(int low,int high)
    {
        if(low<high)
        {
            int middle=low+(high-low)/2;
            
            mergeSort(low, middle);
            
            mergeSort(middle+1, high);
            merge(low, middle,high);
        }
    }
    public void merge(int low,int middle, int high)
    {
        for(int i=low;i<=high;i++)
            helper[i]=numbers[i];
        int i=low;
        int j=middle+1;
        int k=low;
        while(i<=middle && j<=high)
        {
            if(helper[i]<=helper[j])
            {
                array[k]=helper[i];
                i++;
            }else  if(helper[i]>=helper[j])
            {
                array[k]=helper[j];
                j++;
            }
            k++;
        }
        while(i<=middle)
        {
            array[k]=helper[i];
            i++;
            k++;
        }
    }
        