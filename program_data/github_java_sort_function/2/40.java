private static void devide(int array[]){
        
        
        int length = array.length;
        if (length == 1){return;}
        int fi = length/2;
        int la = length - fi;
        
        int array1[] = new int[fi];
        int array2[] = new int[la];
        
        
        for(int i = 0; i < fi; i++){
            array1[i] = array[i];
        }
        for(int i = 0; i < fi; i++){
            array2[i] = array[i+fi];
        }
        
        
        
        devide(array1);
        devide(array2);
        conquer(array, array1, array2);
        
    }
    
    private static void conquer(int array[], int array1[], int array2[]){
        int i = 0,j = 0;
        int max = array.length;
        
        
        
        while(true){
            if(i < array1.length && j < array2.length){
                if(array1[i] < array2[j]){
                    array[i+j] = array1[i];
                    i++;
                }
                else{
                    array[i+j] = array2[j];
                    j++;
                }
                if (i+j == max){
                    return;
                }
            }
            else if(i < array1.length){
                array[i+j] = array1[i];
                i++;
                if (i+j == max){
                    return;
                }
            }
            else {
                array[i+j] = array2[j];
                j++;
                if (i+j == max){
                    return;
                }
            }
        }
    }