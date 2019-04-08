int main()
{
    int n,a[1000000],b[100000],i=1,j=1;
    scanf("%d",&n);
    for(int k=0;k<n;k++)
    {
            a[k]=0;
            b[k]=0;
    }
    while (i!=0||j!=0)
    {
          scanf("%d %d",&i,&j);
          a[i]=a[i]+1;
          b[j]=b[j]+1;
    }
    for(int k=0;k<n;k++)
    {
            if(b[k]==n-1&&a[k]==0)
            printf("%d\n",k);
    }
}