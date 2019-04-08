void trans(char *s,int *p)
{
     int n,i;
     n=strlen(s);
     for(i=0;i<n;i++)
         p[i]=s[i]-'0';
}
main()
{
    char str[110];
    int a[110]={0},b[110]={0};
    int i,j,k,n;
    scanf("%s",str);
    trans(str,a);
    n=strlen(str);
    for(i=0;i<n-1;i++)
    {
        b[i+1]=(10*a[i]+a[i+1])/13;
        a[i+1]=(a[i+1]+10*a[i])%13;
    }
    for(j=0,k=0;j<n;j++)
    {
        if(b[j]!=0)
        {
            k++;
            break;
        }
    }
    if(k==0)
        printf("0\n");
    else
    {
        for(i=j;i<n;i++)
            printf("%d",b[i]);
        printf("\n");
    }    
    printf("%d\n",a[n-1]);
    }