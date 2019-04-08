main()
{
    int n,k,x=0,y=0;
    scanf("%d",&n);
    int *a=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    scanf("%d",&k);
    for(int j=0;x+y!=n;j++)
    {
            if(a[j]==k)
            { 
                       for(int i=j;i<(n-x);i++)
                       {
                               a[i]=a[i+1];
                       }
                       x++;
                       j--;       
            }
            else
            y++;
    }
    printf("%d",a[0]);
    for(int i=1;i<(n-x);i++)
    printf(" %d",a[i]);
    getchar();
    getchar();
}
