int main(){
    int i,k,n,m,t,cf[100]={0};
    int jinwei=0;
    cf[0]=1;
    scanf("%d",&n);
    t=0;
    for(i=0;i<n;i++){
                     for(k=0;k<=t;k++){
                                       cf[k]=cf[k]*2+jinwei;
                                       if(cf[k]>=10){
                                                   cf[k]=cf[k]%10;
                                                   jinwei=1;
                                                   }
                                                   else{
                                                        jinwei=0;
                                                        }
                                                        }                               
                     for(m=99;cf[m]==0;m--);
                     t=m+1;             
                     }                     
    for(i=99;cf[i]==0;i--);
    for(;i>=0;i--){
                   printf("%d",cf[i]);
                   }
  
    return 0;
}