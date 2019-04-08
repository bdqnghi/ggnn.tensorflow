int main()
{
    int n;
    scanf("%d",&n);
    int i,sz[100];
    for(i=0;i<n;i++){
       scanf("%d",&sz[i]);
    }
    int k=0,j=n-1,e;
    while((k<=n/2)&&(j>=n/2)){
         e=sz[k];
         sz[k]=sz[j];
         sz[j]=e;
         k++;
         j--;
         }
    for(i=0;i<n-1;i++){
       printf("%d ",sz[i]);
       }
    printf("%d",sz[n-1]);
    int a;
    scanf("%d",&a);
    return 0;
}
