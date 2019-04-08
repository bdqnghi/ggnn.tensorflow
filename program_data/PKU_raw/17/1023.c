main()
{
    char s[101];
    int i,a[101],j,l;
    while((scanf("%s",s))!=EOF)
    {
        j=0;
        puts(s);
        l=strlen(s);
        for(i=0;i<l;i++)
        {
            if(s[i]=='(') a[++j]=i;
            else if(s[i]==')')
            {
                if(j)
                {
                    s[i]=' ';
                    s[a[j]]=' ';
                    j--;
                }
                else s[i]='?';
            }
            else s[i]=' ';
        }
        for(i=1;i<=j;i++) s[a[i]]='$';
        puts(s);
    }
}
