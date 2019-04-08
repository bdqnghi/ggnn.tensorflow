int main(){
    int n,k,s,h=0,t=0;
    scanf("%d%d",&n,&k);
    int a[n];
    for(int i=0;i<n;i++){
    scanf("%d ",&a[i]);
     }
    for(int i=0;i<n-1;i++){
       for(int j=i+1;j<n;j++){
        s=a[i]+a[j];
        if(s==k){
         h=1;
       }
      }
    }
   if(h==1&&t==0){
    printf("yes");
   }else{
    printf("no");
   }
   return 0;
}