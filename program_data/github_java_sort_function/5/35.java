public void bubbleSort(){
        for(int i=0; i<length-1;i++){
            for(int j=0;j<length-1-i;j++){
                compare(j,j+1);
            }
        }
    }
    public void compare(int x, int y){
        int z=0;
        if(a[x]>a[y]){
            z=a[x];
            a[x]=a[y];
            a[y]=z;
        }   
    }