static void bubbleSortFunction(int[]numList) {
        int n = numList.length; 
        int t = 0; 
        
        for(int i=0; i < n; i++) { 
            for(int j = 1; j < (n-i); j++ ) { 
                if(numList[j-1] < numList[j]) {
                    
                    
                    t = numList[j-1];
                    numList[j-1] = numList[j];
                    numList[j] = t;
                }
            }
            System.out.println(Arrays.toString(numList)); 
        }
    }