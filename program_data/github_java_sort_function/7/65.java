public static void shellSorting(int a[],int n){
        int g = getGap();
        if(g==0){
            if(n>=2 && a[0]>a[1])
            {
                int temp = a[0];
                a[0] = a[1];
                a[1] = temp;    
            }
            display(a,n);
        }
        else{
        for(int i=0;i<n-g;i++){
            if(a[i]>a[i+g])
            {
                int temp = a[i];
                a[i] = a[i+g];
                a[i+g] = temp;
            }
        }
        shellSorting(a,n);
    }
}