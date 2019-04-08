int N,input[26],i,j,k,ans[26],Max;
int cons(int i){
   int a=0;
   if(ans[i]!=0)
     return ans[i];
   for(int j=i+1;j<N;j++){
     if(input[j]<=input[i])   
        if(a<cons(j))
           a=ans[j];   
   }
   ans[i]=a+1;
   return ans[i];
}
int main(){
    Max=0;
    scanf("%d",&N);
    for(i=0;i<N;i++){
       scanf("%d",&input[i]);
       ans[i]=0;
    }
    for(i=N-1;i>=0;i--){
        if(Max<cons(i))           
           Max=ans[i];
    }           
    printf("%d\n",Max);
    return 0;    
}