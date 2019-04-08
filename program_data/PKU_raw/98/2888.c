//struct
main()
{
    int n;
    scanf("%d",&n);
    char a[400][40];
    for(int i=0;i<n;i++)
    {
        scanf("%s", a[i]);
    }
    int l=80,o,s,d;
    for(int i=0;i<n-1;i++)
    {
        s=strlen(a[i]);
        d=strlen(a[i+1]);
        o=l-s-d-1;
        if(o<0)
        {
            if((l-s)>=0)
            printf("%s\n",a[i]);
            l=80;
        }
        else
        {
            printf("%s ",a[i]);
            l=l-1-s;
        }
    }
        s=strlen(a[n-1]);
        l=l-s;
        if(l<0)
        {
            printf("\n");
            printf("%s",a[n-1]);
        }
        else
        printf("%s",a[n-1]);
}
