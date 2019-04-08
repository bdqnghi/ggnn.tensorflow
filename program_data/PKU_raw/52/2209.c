void main ()
{
    int n,m ,i,j;
    scanf ("%d%d",&n,&m);
    int a[100];
    for (i=0;i<n;i++)
    scanf ("%d",&a[i]);
    int *p;
    p=a;
    for (i=1;i<(n-m+1);i++)
    p++;
    for (i=0;i<m;i++)
    {
    printf ("%d ",*p);
    p++;}
    p=a;
    for (i=0;i<n-m-1;i++)
    {printf("%d ",*p);
    p++;}
printf("%d",*p);
}

