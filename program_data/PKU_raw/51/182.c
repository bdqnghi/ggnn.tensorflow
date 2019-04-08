int n;
int f(char c[],int i,int j)
{
    int k;
    for(k=0;k<n;k++)
    if(c[i+k]!=c[j+k])
    return 0;
    return 1;
    }
int main()
{
    int i,j,k,m,sum=0;
    static char c[510];
    static int s[500][2];
    scanf("%d\n",&n);
    gets(c);
    for(i=0;c[i]!=0;i++);
    m=i;
    for(i=0;i<=m-n;i++)
    {
        for(j=0;j<sum;j++)
        if(f(c,i,s[j][0]))
        {
            s[j][1]++;
            break;
            }
        if(j==sum)
        {
            s[sum][0]=i;
            s[sum][1]=1;
            sum++;
            }
        }
    k=0;
    for(i=0;i<sum;i++)
        k=(k>s[i][1])?k:s[i][1];
    if(k==1)
    printf("NO");
    else
    {printf("%d\n",k);
    for(i=0;i<sum;i++)
    if(k==s[i][1])
    {for(j=0;j<n;j++)
    printf("%c",c[s[i][0]+j]);
    printf("\n");}}
    }
