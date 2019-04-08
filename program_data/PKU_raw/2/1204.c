
struct book
{
    int num;
    char author[27];
}book[1000];

int main()
{
    int n, i, a, max=0, alp[26]={0};
    char *j;

    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        scanf("%d %s", &book[i].num, book[i].author);
        int len=strlen(book[i].author);
        for(j=book[i].author;j<(book[i].author+len);j++)
        {
            int x=*j;
            ++*(alp+x-65);
            if(*(alp+x-65)>max)
            {
                max=*(alp+x-65);
                a=x;
            }
        }
    }

    printf("%c\n%d\n", a, max);

    for(i=0;i<n;i++)
    {
        int len=strlen(book[i].author);
        for(j=book[i].author;j<(book[i].author+len);j++)
        {
            if((int)*j==a)
                printf("%d\n", book[i].num);
        }
    }

    return 0;
}
