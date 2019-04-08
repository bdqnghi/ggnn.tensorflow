int main(){
int n,i,sz[500],js[500],k=0,e,l;
scanf("%d",&n);
for(i=0;i<n;i++){
     scanf("%d",&sz[i]);
     if(sz[i]%2==1){
        js[k]=sz[i];
        k++;
       }
   }
for(l=1;l<k;l++){
   for(i=0;i<k-l;i++){
       if(js[i]>js[i+1]){
          e=js[i+1];
          js[i+1]=js[i];
          js[i]=e;
          }
       }
    }
for(i=0;i<k;i++){
   if (i<k-1)
       printf("%d,",js[i]);
   if (i==k-1)
       printf("%d",js[i]);
   }

return 0;
}