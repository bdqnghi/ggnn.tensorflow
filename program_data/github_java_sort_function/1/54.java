
        public void sort() throws InterruptedException {
            int i = 1;
            while (i < arr.length) {
                
                try {
                    int j = i;
                    while (j > 0 && arr[j-1] > arr[j]) {
                        int i1 = arr[j];
                        int i2 = arr[j-1];
                        arr[j] = i2;
                        arr[j-1] = i1;
                        j--;                    
                    }
                    i++;
                    sorted = i;
                    firstSpot = i;
                    secondSpot = j;
                } finally {

                }
                pause(2);
            }
        }