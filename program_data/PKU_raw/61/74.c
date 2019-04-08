int main()
{
    int n;
    int a[21];
    a[1]=1;
    a[2]=1;
    for(int i=3;i<=20;i++)
    a[i]=a[i-1]+a[i-2];
    scanf("%d",&n);
    int b[n];
    for(int i=0;i<n;i++)
   { scanf("%d",&b[n]);
    printf("%d\n",a[b[n]]);}
    getchar();
    getchar();
}
