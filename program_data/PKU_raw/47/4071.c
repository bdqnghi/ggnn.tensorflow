int main()
{
    int a[100],i,k,n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
                     scanf("%d",&a[i]);
                     }
    for(i=n-1;i>0;i--){
                        printf("%d ",a[i]);
                       }
                     a[0]=a[0];
                    printf("%d",a[i]);
    return 0;
}