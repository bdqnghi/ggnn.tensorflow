
    public static <K> void merge(K[] S1, K[] S2, K[] S, Comparator<K> comp) {
        int i = 0, j = 0;
        while (i + j < S.length) {
            if (j == S2.length || (i < S1.length && comp.compare(S1[i], S2[j]) < 0))
                S[i + j] = S1[i++]; 
            else
                S[i + j] = S2[j++]; 
        }
    }

    
    public static <K> void mergeSort(K[] S, Comparator<K> comp) {
        int n = S.length;
        if (n < 2)
            return; 
        
        int mid = n / 2;
        K[] S1 = Arrays.copyOfRange(S, 0, mid); 
        K[] S2 = Arrays.copyOfRange(S, mid, n); 
        
        mergeSort(S1, comp); 
        mergeSort(S2, comp); 
        
        merge(S1, S2, S, comp); 
    }
