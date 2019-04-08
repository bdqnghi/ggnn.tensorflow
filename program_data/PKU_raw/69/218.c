int main()
{
    int res[300],ls,lt,i,max,s1[300],t1[300];
    char s[300],t[300];
    memset(s,0,sizeof(s));
    memset(res,0,sizeof(res));
    scanf("%s",s);
    scanf("%s",t);
    {
        ls=strlen(s);
        lt=strlen(t);
        memset(s1,0,sizeof(s1));
        memset(t1,0,sizeof(t1));
        s1[0]=ls;
        for (i=1;i<=ls;i++)
            s1[i]=s[ls-i]-'0';
        t1[0]=lt;
        for (i=1;i<=lt;i++)
            t1[i]=t[lt-i]-'0';
        max=s1[0]>t1[0]?s1[0]:t1[0];
        for (i=1;i<=max;i++)
        {
            res[i]+=s1[i]+t1[i];
            if (res[i]>=10)
            {
                res[i+1]+=res[i]/10;
                res[i]%=10;
            }
            if (res[max+1]!=0)
                res[0]=max+1;
            else res[0]=max;
        }
    }
    for (i=res[0];res[i]==0;i--);
    if (i==0)printf("0");else
    for (;i>=1;i--)
        printf("%d",res[i]);

    printf("\n");
    return 0;
}