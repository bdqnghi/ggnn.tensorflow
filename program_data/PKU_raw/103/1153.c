main()
{
    char str[1000];
    int l;
    int i,r;
    gets(str);
    l=strlen(str);
    for(i=0;i<l;i++)
        if(str[i]<='z'&&str[i]>='a') str[i]=str[i]-'a'+'A';

    r=1;
    for(i=0;i<l;i++)
    {
        if(str[i]==str[i+1]) r++;
        if(str[i]!=str[i+1])
        {
            printf("(%c,%d)",str[i],r);
            r=1;
        }
    }
}
