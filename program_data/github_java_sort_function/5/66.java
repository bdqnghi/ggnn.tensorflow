 public static <T extends Comparable<T>> void sort(List<T> lijst) {
        
        
        int n = lijst.size(); 
        T temp; 

        
        for (int i = 0; i < n; i++) {
            
            
            for (int j = 1; j < (n - i); j++) {
                if (lijst.get(j - 1).compareTo(lijst.get(j)) > 0) {
                    
                    
                    temp = lijst.get(j - 1);
                    lijst.set((j - 1), lijst.get(j));
                    lijst.set(j, temp);
                }

            }
        }
    }