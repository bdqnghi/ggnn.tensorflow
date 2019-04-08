int main()
{
    void paixu(int array[],int x);
    int i,n1,n2,a[50],b[50],c[100];
    scanf("%d %d",&n1,&n2);
    for(i=0;i<=n1-1;i++)
    scanf("%d",&a[i]);
    for(i=0;i<=n2-1;i++)
    scanf("%d",&b[i]);
    paixu(a,n1);
    paixu(b,n2);
    for(i=0;i<=n1-1;i++)
    c[i]=a[i];
    for(i=n1;i<=n1+n2-1;i++)
    c[i]=b[i-n1];
    for(i=0;i<=n1+n2-2;i++)
    printf("%d ",c[i]);
    printf("%d",c[n1+n2-1]);
    return 0;
}
void paixu(int array[],int x)
{
    int j,k,t;
    for(k=1;k<=x-1;k++)
     {
         for(j=0;j<=x-k-1;j++)
         if(array[j]>array[j+1])
         {t=array[j];array[j]=array[j+1];array[j+1]=t;}
     }
}
           
    