int main()
{
    int n,i,j,l;
    int flag;
    char a[100];
    scanf("%d\n",&n);
    for(i=1;i<=n;i++)
    {
        gets(a);
        flag=1;
        l=strlen(a);
        if((a[0]=='_')||(a[0]>='A'&&a[0]<='Z')||(a[0]>='a'&&a[0]<='z'))
        for(j=1;j<l;j++)
        {
            if((a[j]=='_')||(a[j]>='A'&&a[j]<='Z')||(a[j]>='a'&&a[j]<='z')||(a[j]>='0'&&a[j]<='9'))
                continue;
            else
            {
                flag=0;
                break;
            }
        }
        else
        flag=0;
        printf("%d\n",flag);
    }
}