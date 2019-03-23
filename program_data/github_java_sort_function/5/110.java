 public static void main(String[] args) {

        int a[] = new int[n];
     
        for(int a_i=0; a_i < n; a_i++){
            for(int j=0;j<(a.length-(a_i+1));j++){
                if(a[j]>a[j+1]){
                    int temp=a[j+1];
                    a[j+1]=a[j];
                    a[j]=temp;
                    swaps++;
                }
            }
            
        }
      
    }