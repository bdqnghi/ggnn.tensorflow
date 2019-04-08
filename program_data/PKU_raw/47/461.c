
int main(){
int k,i,e,n,sz[100];
scanf("%d",&n);
   for(i=0;i<n;i++){ 
            scanf("%d",&sz[i]);
            }


    printf("%d ",sz[n-1]);
    for(i=n-2;i>=1;i--){
         printf("%d ",sz[i]);
    }
    printf("%d",sz[0]);


return 0;
}
