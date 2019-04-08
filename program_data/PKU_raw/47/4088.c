int main()
{
    int n,i=0,j=0,k=0,sum=0;
    scanf("%d",&n);
    int an[100],bn[100];
    for(k=0;k<n;k++){
       scanf("%d",&an[k]);
       bn[n-1-k]=an[k];
       }
    for(i=0;i<n-1;i++){
       printf("%d ",bn[i]);
       }
    printf("%d",bn[n-1]);
           return 0;
}
