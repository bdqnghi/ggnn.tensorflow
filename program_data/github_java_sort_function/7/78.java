public void sortUsing(int[] h)
    {
        sort(this.data, h);
    }
    
    public static void sort(Comparable[] a, int[] b)
    {
        int N = a.length;
        int[] incs = b;
        
        for(int k = 0; k < incs.length; k++)
        {
            int h = incs[k];
            counter++;
            for(int i = h; i < N; i++)
            {
                
                for(int j = i; j >= h; j-=h)
                {
                    if(less(a[j], a[j-h]))
                    {
                        exch(a, j, j-h);
                    }
                    else
                        break;
                        
                }
            }
        }
    }
    
}