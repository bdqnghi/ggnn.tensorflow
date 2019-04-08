int main()
{
    int k,i,j,max;
    scanf("%d",&k);
    int a[k],b[100];
    for(i=0;i<k;i++)
    scanf("%d",&a[i]);
    b[0]=1;
    max=1;
    for(i=1;i<k;i++)
    {
       b[i]=1;
       for(j=0;j<i;j++)
       if(a[j]>=a[i])
       if(b[j]+1>b[i])
       b[i]=b[j]+1;
       if(b[i]>max)
       max=b[i];
    }
    printf("%d",max);
    getchar();
    getchar();
}