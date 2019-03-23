   
    public void quicksort(int left, int right) {
        int l1 = left, r1 = right;

        if (left > right)
            return;

        while (l1 != r1) {
            
            while (b[r1] >= b[left]&&l1<r1) {
                r1--;
            }
            while (b[l1] <= b[left]&&l1<r1) {
                l1++;
            }
            
            if (l1 < r1) {
                int temp = b[r1];
                b[r1] = b[l1];
                b[l1] = temp;
            }
        }

        
        
        
        
        int temp = b[left];
        b[left] = b[l1];
        b[l1] = temp;
        
        quicksort(left, l1 - 1);
        
        quicksort(l1+1, right);
    }
