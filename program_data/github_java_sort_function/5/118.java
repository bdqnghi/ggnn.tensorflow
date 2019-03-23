protected int[] sort(Integer[]... arrays1) {
        Log.i("sabin","bubb");

        Integer[]array = arrays1[0];

        Log.i("size", String.valueOf(array.length));


        start = System.currentTimeMillis();

        

        int n = array.length;
        int temp = 0;

        for(int i=0; i < n; i++){
            for(int j=1; j < (n-i); j++){

                if(array[j-1] > array[j]){
                    
                    temp = array[j-1];
                    array[j-1] = array[j];
                    array[j] = temp;
                }

            }
        }

        return null;
    }
