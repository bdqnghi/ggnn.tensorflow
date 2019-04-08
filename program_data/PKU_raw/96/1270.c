main()
{
    char str[200];
    int a[200]={0},b[200]={0},c;
    int i,j,k,m,n;
    scanf("%s",str);
    n=strlen(str);
    for(i=0;i<n;i++)
    {
        a[i]=str[i]-'0';
    }
    for(i=1;i<n;i++)
    {
        a[i]=10*a[i-1]+a[i];
        b[i]=a[i]/13;
        a[i]=a[i]%13;
    }
    for(i=0,k=0;i<n;i++)
    {
        if(b[i]!=0)
        {
            k++,j=i;
            break;
        }
    }
    if(k==0)   printf("0\n");
    else
    {
        for(i=j;i<n;i++)
            printf("%d",b[i]);
        printf("\n");
    }
    printf("%d\n",a[n-1]);
    }            
    
        