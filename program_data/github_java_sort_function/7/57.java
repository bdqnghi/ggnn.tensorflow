 protected void sortInternal(Comparable[] a) {
        int h = 1;
        while (h < a.length / 3) {
            h = 3 * h + 1;
        }
        
        while (h >= 1) {
            
            for (int i = h; i < a.length; ++i ) {
                for (int j = i; j >= h && less(a[j], a[j - 1]); j -= h) {
                    swap(a, j, j - h);
                }
            }
            h /= 3;
        }