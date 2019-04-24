public void shellSort_1() {
        
        long begin = System.nanoTime();
        int step = 0;
        
        while(step <= n) {
            step = 3 * step + 1;
        }

        if (step == 1 || step == 4) {
            step = 1;
        }
        else {
            for (int i = 0; i < 2; i++) {
                step = (step - 1) / 3;
            }
        }
        
        
        for (int shell = step; shell > 0; shell = (shell - 1) / 3) {
            
            
        
        long end = System.nanoTime();
        time = end - begin;
        
    } 
    