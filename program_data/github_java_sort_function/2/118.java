 
    public static void merge(int[] arr,int p,int q,int r){


        int lLen = q-p+1;
        int rLen = r-q;

        int[] L = new int[lLen+1];
        int[] R = new int[rLen+1];

        for (int i = 0; i < lLen; i++) {
            L[i] = arr[p+i];
        }

        for (int j = 0; j < rLen; j++) {
            R[j] = arr[q+j+1];
        }

        L[lLen] = Integer.MAX_VALUE;
        R[rLen] = Integer.MAX_VALUE;


        int i=0,j=0;

        for(int k=p;k<=r;k++){
            if(L[i]<=R[j]){
                arr[k]=L[i];
                i++;
            }else {
                arr[k]=R[j];
                j++;
            }
        }
    }
    
    public static void mergeSort(int[] arr,int p,int r){

        if(p<r){
            int q=(p+r)/2;
            mergeSort(arr,p,q);
            mergeSort(arr,q+1,r);
            merge(arr,p,q,r);
            print(arr);
        }
    }