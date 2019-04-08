int main()
{
    int n,i,m=0,x,y;
    int a[10000],b[10000]={0};
    scanf("%d",&n);
    for (i=0;i<n;i++)
    a[i]=i;
    for(i=0;;i++)
    {
                   scanf("%d",&x);
                   scanf("%d",&y);
                   if(x==0&&y==0)
                   break;
                   a[x]=-1;
                   b[y]++;
    }       
    for (i=0;i<n;i++)
    if (a[i]>=0&&b[i]==n-1)
    {
                           printf("%d\n",a[i]);
                           m++;
    }
    if (m==0)
    printf("NOT FOUND\n");
}