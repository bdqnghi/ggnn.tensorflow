public static void sort(int[] v, int left, int right)
    {
        int i, last;
        if(left>=right)
            return;
        
        swap(v, left, rand(left, right));
        last=left;
        
        for(i=left+1; i<= right; i++)
            if(v[i]<v[left])
                swap(v, ++last, i);
        
        swap(v, left, last);
        
        sort(v, left, last-1);
        sort(v, last+1, right);
    } 

    public static void swap(int[] v, int i, int j)
    {
        int temp;

        temp=v[i];
        v[i]=v[j];
        v[j]=temp;
    }
    