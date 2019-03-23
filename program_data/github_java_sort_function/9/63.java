public static Integer[] select(Integer[] ints){
        
        int length = ints.length;
        for(int j=0; j<length-1; j++){
            int smallest = j;
            for(int i=j+1; i<length; i++){
                if(ints[i] < ints[smallest]){
                    smallest = i;
                }
            }
            int temp = ints[smallest];
            ints[smallest] = ints[j];
            ints[j] = temp;
        }
        
        
        return ints;
        
        
    }