int main()
{
    int n;
    scanf("%d",&n);
    int a[n],b[n];
    int i,j,k;
    for (i=0;i<n;i++)
    {
        a[i]=0;
        b[i]=0;
    }
    scanf("%d %d",&i,&j);
    while (i!=0 || j!=0)
    {
          a[i]=a[i]+1;
          b[j]=b[j]+1; 
          scanf("%d %d",&i,&j);
    }
    k=0;
    for (i=0;i<n;i++)
        if (a[i]==0 && b[i]==n-1)
        {
          printf("%d",i);
          k=k+1;
        }
    if (k==0) printf("NOT FOUND");
    getchar();
    getchar();
}