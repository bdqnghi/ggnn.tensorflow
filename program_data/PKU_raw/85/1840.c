char st[100][21];
int n,i,boo;
int check(char s)
{
    int m,j;
    m=strlen(st[s]);
    if (st[s][0]<=57&&st[s][0]>=48)
    return 0;
    for (j=0;j<m;j++)
    {
        if (st[s][j]<48||st[s][j]>57&&st[s][j]<65||st[s][j]>122||st[s][j]>90&&st[s][j]<97&&st[s][j]!=95)
        {
        return 0;
        }
    }
    return 1;
}
int main()
{
    scanf("%d\n",&n);
    for (i=0;i<n;i++)
    gets(st[i]);
    for (i=0;i<n;i++)
    {
        boo=check(i);
        if (boo==1)
        printf("yes\n");
        else printf("no\n");
    }
    return 0;
}
