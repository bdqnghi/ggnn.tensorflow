main()
{
    int f[20];
    int n,i,j,a;
    f[0]=1;f[1]=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(a==1||a==2)
            printf("1");
        else
        {
            for(j=0;j+2<a;j++)
            f[j+2]=f[j]+f[j+1];
            printf("%d\n",f[a-1]);
        }        
    }
    getchar();
    getchar();
}