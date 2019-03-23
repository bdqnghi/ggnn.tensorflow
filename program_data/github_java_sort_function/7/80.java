    public static void sort(int[] arrays){
        if(arrays==null || arrays.length<=1)
            return;
        int increments = arrays.length/2;
        while(increments>=1){
            for(int i=0; i<arrays.length;i++){
                for(int j=i;j<arrays.length-increments;j=j+increments){
                    if(arrays[j]>arrays[j+increments]){
                        int temp = arrays[j];
                        arrays[j] = arrays[j+increments];
                        arrays[j+increments]  = temp;
                    }
                }
                
            }
            increments = increments/2;
        }
    }