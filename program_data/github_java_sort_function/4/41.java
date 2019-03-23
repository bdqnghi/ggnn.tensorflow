 public void sort(int eCost[])
    {
        int n = eCost.length;
 
        for (int i = n / 2 - 1; i >= 0; i--)
            heapify_eC(eCost, n, i);
 
        
        for (int i=n-1; i>=0; i--)
        {
            
            int temp = eCost[0];
            eCost[0] = eCost[i];
            eCost[i] = temp;
            heapify_eC(eCost, i, 0);
        }
    }
 
    void heapify_eC(int sorting[], int n, int i)
    {
        int root = i;  
        int r = 2*i + 2;  
        int l = 2*i + 1; 
         
        if (l < n && sorting[l] > sorting[root])
            root = l;
 
        if (r < n && sorting[r] > sorting[root])
            root = r;
         
        if (root != i)
        {
            int temp = sorting[i];
            sorting[i] = sorting[root];
            sorting[root] = temp;
            heapify_eC(sorting, n, root);
        }
    }