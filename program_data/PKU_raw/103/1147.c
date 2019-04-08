main()
{
    char s[1020];
    int len,i,j=0;
    scanf("%s",s);
    len=strlen(s);
    for (i = 0;i < len;i ++)
        if (s[i]<='z'&&s[i]>='a')
            s[i]=s[i]-'a'+'A';
    while(j!=len)
    {
        int le=1;
        for (i = j + 1;s[i]==s[j];i ++)
            le ++,j ++;
        printf("(%c,%d)",s[j],le);
        j ++;
    }
}
