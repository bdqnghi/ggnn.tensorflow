int main(){
   int n[300],m[300],i,j;
   for(i=0;;i++){
      scanf("%d %d",&n[i],&m[i]);
      if(n[i]==0){
         break;
      }else{
         int f[300];
         f[1]=0;
         for(j=1;j<=n[i];j++){
            f[j+1]=(f[j]+m[i])%(j+1);
         }
         printf("%d\n",f[n[i]]+1);
      }
   }
   return 0;
}