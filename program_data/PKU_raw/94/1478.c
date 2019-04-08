int main()
{
    int n,i,j=0;
    int a[500],b[500];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
    if((a[i])%2==1)
    {
                  b[j]=a[i];
                  j++;
    }
    }
    int k=j;
    int m,t;
    for(m=0;m<k;m++)
    scanf("%d",&b[m]);
    for(m=k-1;m>0;m--)
    {
                for(t=0;t<m;t++)
                {
                int tmp=b[t];
                if(tmp>b[t+1])
                {
                b[t]=b[t+1];
                b[t+1]=tmp;
                }
                }
                }
    for(m=0;m<k;m++)
    {
                 if(m==0)
                 printf("%d",b[0]);
                 else
                 printf(",%d",b[m]);
                 }
                 return 0;
                 }