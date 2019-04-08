
int main()
{
    int n,i,j,max=0;
    int zuozhe[26]={0};
    char maxer;
    struct book
    {
         int num;
         char author[26];
    }
    shu[1000];
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%d %s",&shu[i].num,shu[i].author);
        for (j=0;j<26;j++)
           zuozhe[shu[i].author[j]-65]++;
    }
    for (j=0;j<26;j++)
        if (zuozhe[j]>max)
        {
            max=zuozhe[j];
            maxer=j+65;
        }
    printf("%c\n%d\n",maxer,max);
    for (i=0;i<n;i++)
        for (j=0;j<26;j++)
            if (shu[i].author[j]==maxer)
            {
                printf("%d\n",shu[i].num);
                continue;
            }
}
