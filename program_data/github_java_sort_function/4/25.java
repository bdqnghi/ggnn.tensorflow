void insertNum(int[] a, int num) {
        n++;
        a[n] = num;
        int son = n;
        int temp;
        int father = (son-1)/d;
        while (son != 0) {
            if (a[son]>a[father]) {
                temp = a[son];
                a[son] = a[father];
                a[father] = temp;
                son = father;
                father = (son - 1)/d;
            } else break;
            
        }
    }
    
    void increaseKey(int[] a, int i, int key) {
        if (a[i] >= key) return;
        a[i] = key;
        int temp;
        int son = i;    
        int father = (son-1)/d;
        while (son != 0) {
            if (a[son]>a[father]) {
                temp = a[son];
                a[son] = a[father];
                a[father] = temp;
                son = father;
                father = (son - 1)/d;
            } else break;
            
        }
    }
    int getMaxNum(int[] a) {
        int ans = a[0];
        a[0] = a[n];
        n--;
        int father = 0;
        int temp;
        int son = father * d + 1;
        while (son<=n) {
            int j = son + 1;
            while(j<=n && j <= father * d + d ) {
                if (a[j] > a[son]) {
                    son = j;
                }
                j++;
            }
            if (a[son] > a[father]) {
                temp = a[son];
                a[son] = a[father];
                a[father] = temp;
                father = son;
                son = father * d + 1;
            } else break;
        }
        return ans;
    }