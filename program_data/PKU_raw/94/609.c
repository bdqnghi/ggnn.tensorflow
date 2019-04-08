int main(){
    int N,k=0,i,j,m;
    int sz[500],js[500];
    scanf("%d",&N);
    for(i=0;i<N-1;i++){
       scanf("%d ",&sz[i]);
    }
    scanf("%d",&sz[N-1]);
    for(i=0;i<N;i++){
       if(sz[i]%2!=0){
           js[k]=sz[i];
           k++;
       }
    }
    for(j=0;j<k;j++){
       for(i=0;i<k-j-1;i++){
           if(js[i]>js[i+1]){
              m=js[i];
              js[i]=js[i+1];
              js[i+1]=m;
           }
       } 
    }
    for(i=0;i<k-1;i++){
        printf("%d,",js[i]);
    }
    printf("%d",js[k-1]);
    return 0;
}