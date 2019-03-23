public int[] sort(int num[]) {
        
        int h = 1;
        
        while (h < num.length / 3)
            h = h * 3 + 1;
        for (; h > 0; h /= 3) {
            
            for (int k = 0; k < h; k++) {
                
                for (int i = h + k; i < num.length; i += h) {
                    int j = i;
                    
                    while (j >= h && num[j] < num[j - h]) {
                        swap(num, j, j - h);
                        j -= h;
                    }

                }
            }
        }

        return num;
    }

    
    private void swap(int arg[], int i, int j) {
        
        if (i != j) {
            arg[i] = arg[i] ^ arg[j];
            arg[j] = arg[j] ^ arg[i];
            arg[i] = arg[j] ^ arg[i];
        }
    }