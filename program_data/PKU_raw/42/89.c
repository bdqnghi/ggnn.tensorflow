
main(){
       int a[100000];
       int i,j,n,k,sum;
       scanf("%d",&n);
       sum=n;
       for(i=0;i<n;i++){
           scanf("%d",&a[i]);
       }
       scanf("%d",&k);
       for(i=0;i<sum;i++){
           if(a[i]==k){
               sum=sum-1;
               for(j=i;j<sum;j++){
                   a[j]=a[j+1];
               }
           i=i-1;
           }
       }
       for(i=0;i<sum-1;i++){
           printf("%d ",a[i]);
       }
       printf("%d",a[sum-1]);
}
