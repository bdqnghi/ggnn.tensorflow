  private static int[] sort(char[] a) {
        int n = a.length;
        int[] order = new int[n];
        int[] count = new int[R + 1]; 
        char[] sorted = new char[n];
        
        for (int i = 0; i < n; i++) {
            count[((int) a[i]) + 1]++;
        }
        
        for (int i = 1; i <= R; i++) {
            count[i] += count[i - 1];
        }
        
        
        for (int i = 0; i < n; i++) {
            order[count[(int) a[i]]] = i;
            sorted[count[(int) a[i]]++] = a[i];            
        }
        
        for (int i = 0; i < n; i++) {
            a[i] = sorted[i];
        }        
        return order;
    }
    
    private static void sort(char[] a, int[] b) {
        assert(a.length == b.length);
        int n = a.length;
        int[] order = sort(a);
        int[] tmp = new int[n];
        for (int i = 0; i < n; i++) {
            tmp[i] = b[order[i]];
        }
        for (int i = 0; i < n; i++) {
            b[i] = tmp[i];
        }        
    }