int main()
{
    int a[500],b[500];
    int N;
    int i,k,t;
    scanf("%d",&N);
    for(i=0;i<N;i++){
       scanf("%d",&a[i]);
    }
    for(i=0;i<N;i++){
          if(a[i]%2!=0)
             b[i]=a[i];
          else
             b[i]=0;
    }
    for(k=0;k<N;k++){
         for(i=0;i<N-1;i++){
             if(b[i]>b[i+1]){
                 t=b[i];
                 b[i]=b[i+1];
                 b[i+1]=t;
              }
          }
     }
    for(i=0;i<N;i++){
        if(b[i]!=0&&i!=N-1){
            printf("%d,",b[i]);
         }
        else if(b[i]!=0){
           printf("%d",b[N-1]);
        }
    }
    return 0;
}
 
