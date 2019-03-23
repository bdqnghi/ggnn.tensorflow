   int[] sort(int[] array){  
        for(int i=0;i<array.length;i++){
        int min=i;
        for(int j=i+1;j<array.length;j++){
            if(array[min]>array[j]){
                min=j;
            }
        }
       int temp=array[i];
        array[i]=array[min];
        array[min]=temp;
        }
        return array;
    }