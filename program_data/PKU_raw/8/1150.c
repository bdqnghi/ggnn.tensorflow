int main()
{
    int m,n,t;
    scanf("%d%d",&m,&n);
    printf("\n");
    int a[m],b[n],i,j;
    for(i=0;i<m;i++) scanf("%d",&a[i]);
    printf("\n");
    for(i=0;i<n;i++) scanf("%d",&b[i]);
    for(i=1;i<m;i++)
        for(j=0;j<m-i;j++)
            if(a[j]>a[j+1]) {t=a[j];a[j]=a[j+1];a[j+1]=t;}
    for(i=1;i<n;i++)
        for(j=0;j<n-i;j++)
            if(b[j]>b[j+1]) {t=b[j];b[j]=b[j+1];b[j+1]=t;}
    printf("%d",a[0]);
    for(i=1;i<m;i++) printf(" %d",a[i]);
    for(i=0;i<n;i++) printf(" %d",b[i]);
}