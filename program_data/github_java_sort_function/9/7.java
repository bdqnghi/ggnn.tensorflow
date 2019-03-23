public void selectionSort(int a[]){ 
        int min, temp;
        for(int i = 0; i< a.length - 1; i++){
            min = i;    
            for(int j = i+1; j<a.length; j++){
                if(a[j] < a[min]){
                    min = j;
                }   
            }
            temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }
    }