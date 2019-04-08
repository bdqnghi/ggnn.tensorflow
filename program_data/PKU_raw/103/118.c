main()
{
    char s[maxl+1],t;
    int ans=0,i;
    scanf("%s",s);
    t=0;
    for (i=0;s[i]!='\0';i++)
    {
        if ((s[i]==t)||(s[i]==t-'A'+'a'))
        ans++;
        else
        {
            if (i==0)
            ans++;
            else
            {
                printf("%d)",ans);
                ans=1;
            }
            if ((s[i]<='z')&&(s[i]>='a'))
            t=s[i]-'a'+'A';
            else
            t=s[i];
            printf("(%c,",t);
        }

    }
    printf("%d)",ans);

}
