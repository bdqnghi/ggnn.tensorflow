private void insertionsort() {
        int temp, j;

         for (int i=1; i < data.length; i++){
           temp = data[i];
           j = i-1;

           while (j >= 0 && data[j] > temp){
             data[j + 1] = data[j];
             j--;
           }

           data[j+1] = temp;
         }
    }