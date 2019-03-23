public static void sort(int[] a) {
            if(a.length <=1) {
                return;
            }
            boolean sorted = false;
            int wallIndex = 0;
            int lowDigit = 11;
            int temp;
            int digitNum = 1;
            while(!sorted) {
                sorted = true;
                for(int i=0; i<a.length; i++) {
                    int digit = digit(a[i], digitNum);
                    if(digit==-1) {
                        wallIndex++;
                    } if( digit < lowDigit) {
                        sorted = false;
                        lowDigit = digit;
                        temp = a[0];
                        a[0] = a[i];
                        a[i] = temp;
                        wallIndex = 1;
                    } else if(digit == lowDigit) {
                        temp = a[wallIndex];
                        a[wallIndex] = a[i];
                        a[i] =temp;
                        wallIndex++;
                        sorted = false;
                    }
                }
                lowDigit = 11;
                digitNum++;
            }
            
        }
        
        