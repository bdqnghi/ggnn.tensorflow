public static void sort(Comparable[] list)
    {
        int N = list.length;//set size of list
        int h = 1;//set h 
        
        while(h<N/3)//loop to find highest possible in h sequence by incrementing h by 3x+1 times
        {
            h=(3*h+1);//set h to next in h sequence
        }
        
        while(h>=1) //insertion sort through each sequence of h
        {
            for(int i = h; i<N; i++)//go through the list from h element and increment to the end  
            {
                for(int j=i; j>=h && less(list[j],list[j-h]); j-=h)//find anomalies with the item h indexes back from current i and swap
                {
                    exch(list,j,j-h);
                }
            }
            h=h/3;//go to next lower sequence of h in series until h is less than 1
        }
    }
    