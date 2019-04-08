int main()
{

    int n,i,j,flag=0,length=0;
    char a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",a);
        length=strlen(a);
        if('0'<=a[0]&&a[0]<='9') flag=1;
        for(j=0;j<length;j++)
        {
            if('a'<=a[j]&&a[j]<='z') continue;
            else if('A'<=a[j]&&a[j]<='Z') continue;
            else if('0'<=a[j]&&a[j]<='9') continue;
            else if(a[j]=='_') continue;
            else flag=1;
        }
        if(flag==0) printf("yes\n");
        else printf("no\n");
        flag=0;
    }
    return 0;
}

