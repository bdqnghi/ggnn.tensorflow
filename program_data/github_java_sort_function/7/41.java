    public static void shellSort(int[] a) {
        
        for (int hop = a.length / 2; hop > 0; hop /= 2) {
            
            for (int i = hop; i < a.length; i++) {
                int key = a[i];
                int j = i;
                for (; j >= hop && (a[j - hop] > key); j -= hop)
                    a[j] = a[j - hop];
                a[j] = key;
            }
        }
    }
    
    