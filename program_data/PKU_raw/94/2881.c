int main(){
    int N,i,j,s;
    scanf("%d",&N);
    int jishu[501];
    int sz[501];
    j=0;
    for(int i=0;i<N;i++){
        scanf("%d" ,&sz[i]);
        if(sz[i]%2==1){
            jishu[j]=sz[i];
            j++;
        }
    }
    s=j;
    int e;
    for(int i=0;i<s;i++){
      for(int j=0;j<s-i;j++){
         if(jishu[j]>jishu[j+1]){
             e=jishu[j];
             jishu[j]=jishu[j+1];
             jishu[j+1]=e;
         }
      }  
    }
    for(int j=0;j<s;j++){
       if(j!=s-1){
        printf("%d,",jishu[j]);
        }else{
            printf("%d",jishu[j]);
        }
    }
      
   return 0;
}
