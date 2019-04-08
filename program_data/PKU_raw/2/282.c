struct author
{
    char name;
    int count;
}aut[26];

int max(struct author a[26])
{
    int i,max;
    max=a[0].count;
    for(i=0;i<26;i++)
        if(a[i].count>max)
            max=a[i].count;
    return(max);
}
void main()
{
    int m,h=0;
    scanf("%d",&m);
    int i,j,n,l[1000],book_name[1000];
    char author_name[1000][27];
    for(i=0;i<26;i++)
    {
    aut[i].name='A'+i;
    aut[i].count=0;
    }
    for(i=0;i<m;i++)
    {
        scanf("%d%s",&book_name[i],author_name[i]);
        l[i]=strlen(author_name[i]);
        for(j=0;j<26;j++)
        for(n=0;n<l[i];n++)
                if(author_name[i][n]==aut[j].name)
                aut[j].count++;
    }
    for(i=0;i<26;i++)
    {
        if(aut[i].count==max(aut))
        {    
            printf("%c\n",aut[i].name);
            h=i;
        }
    }
    printf("%d\n",max(aut));
    for(i=0;i<m;i++)
    {
        l[i]=strlen(author_name[i]);
        for(n=0;n<l[i];n++)
            if(author_name[i][n]==aut[h].name)
                printf("%d\n",book_name[i]);
    }
}