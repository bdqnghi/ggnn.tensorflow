public static void shellSort(int t[]) {
        
        int n = t.length;
        int h = 1;
        while (h <= n / 3) {     
            h = 3 * h + 1;
        }
        while (h > 0) {
            for (int i = h; i < n; i++) {                   
                for (int j = i; j>= h ; j-=h) {             
                    if (t[j] < t[j-h]) {
                        int temp = t[j];
                        t[j] = t[j-h];
                        t[j-h] = temp;
                    }
                }
            }           
            h = h / 3;
        }
    }
