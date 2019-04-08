int main()
{
    int a[30]={0}, m, i, flag=0;
    char *pt;
    char c[30];
    for(i=0;i<30;i++)
    {
        scanf("%c",&c[i]);
    }
    pt=&c[0];
    m=strlen(c);
    for(i=0;i<m;i++)
    {
        if(c[i]<='9'&&c[i]>='0')
            a[i]=1;
    }
    for(i=0;i<m;i++)
    {
        if(a[i]==1)
        {
            printf("%c",c[i]);
            flag=1;
        }
        if(a[i]==0&&flag==1)
        {
            printf("\n");
            flag=0;
        }
    }
    return 0;
    
}