   public static void shellSort0(int[] array) {
     
        int step;
        
        for (step = array.length / 2; step > 0; step /= 2) {
            
            for (int i = 0; i < step; i++) {
                
                for (int j = i; j < array.length - step; j += step) {
                    for (int k = j + step; k - step >= 0; k -= step) {
                        if (array[k - step] > array[k]) {
                            int temp = array[k - step];
                            array[k - step] = array[k];
                            array[k] = temp;
                        } else {
                            break;
                        }
                    }
                }
            }
            SortUtil.logArray(step, array);
        }

    }