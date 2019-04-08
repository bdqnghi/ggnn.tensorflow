int main(){
    int N,i,e;
    int sz[100];
    scanf("%d",&N);
    for(i=0;i<N;i++){
                     scanf("%d",&(sz[i]));
                     }
    if(N%2==0){
               for(i=0;i<N/2;i++){
                                   e=sz[N-1-i];
                                   sz[N-1-i]=sz[i];
                                   sz[i]=e;
                                   }
    }else{
          for(i=0;i<(N-1)/2;i++){
                                 e=sz[N-1-i];
                                   sz[N-1-i]=sz[i];
                                   sz[i]=e;
                                   }
                                   }
    for(i=0;i<N-1;i++){
                     printf("%d ",sz[i]);
                     }
                     printf("%d",sz[N-1]);
    return 0;
}
                                 
                                         
