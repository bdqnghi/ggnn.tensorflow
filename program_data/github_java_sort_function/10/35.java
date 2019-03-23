public void sort(int[] data, int maxValue){
          int [] bucket = new int[maxValue+1];
     
          for (int i = 0 ; i < bucket.length ; i++) {
             bucket[i] = 0;
          }
          
          for (int i = 0 ; i < data.length ; i++) {
             bucket[data[i]]++;
          }
          
          int outPos = 0;
          for (int i = 0 ; i < bucket.length; i++) {
             for (int j = 0 ; j < bucket[i] ; j++) {
                data[outPos++] = i;
             }
          }
    }
    
    public int maxValue(int[] data){
        int maxValue = 0;
        
        for (int i = 0 ; i < data.length ; i++){
            if (data[i] > maxValue){
                maxValue = data[i];
            }
        }
        return maxValue;
    }