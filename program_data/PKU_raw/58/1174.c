main()
{
    int n;
    int i;
    scanf("%d\n",&n);
    char s[100];
    for(i=0;i<n;i++){
    gets(s);
    int m,j=0,count=0;
    while(s[j]!='\0')
    {
        if(s[j]==' '||s[j]<'A'&&s[j]>'9'||s[j]>'Z'&&s[j]<'A'||s[j]>'z'||s[j]<'0')
        count++;
        j++;
    }
    if(s[0]=='_'||s[0]>='a'&&s[0]<='z'||s[0]>='A'&&s[0]<='Z')
    {
        if(count==0)
        {
         m=1;
         }
        else
        m=0;
    }
     else
    m=0;
    printf("%d\n",m);
}
}