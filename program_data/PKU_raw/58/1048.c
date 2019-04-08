int number(char a)
{
    int c;
    c=a-'0';
    if(c>=0&&c<=9)
    return 1;
    else
    return 0;
}
int line(char a)
{
    int c;
    c=a-'_';
    if(c==0)
    return 1;
    else
    return 0;
}
int small(char a)
{
    int c;
    c=a-'a';
    if(c>=0&&c<=25)
    return 1;
    else
    return 0;
}
int big(char a)
{
    int c;
    c=a-'A';
    if(c>=0&&c<=25)
    return 1;
    else
    return 0;
}
int main()
{
    int n,i,j,c;
    char a[81];
    int b[100]={0};
    scanf("%d",&n);
    scanf("%c",&a[0]);
    for(i=1;i<=n;i++)
    {
        b[i-1]=1;
        for(j=1;j<=81;j++)
        {
            scanf("%c",&a[j-1]);
            c=a[j-1]-'\n';
            if(c==0)
            break;
            c=line(a[j-1])+number(a[j-1])+big(a[j-1])+small(a[j-1]);
            if(c==0)
            {
                b[i-1]=0;
            }
        }
        if(number(a[0])==1)
        b[i-1]=0;
    }
    for(i=1;i<=n;i++)
    printf("%d\n",b[i-1]);
    return 0;
}