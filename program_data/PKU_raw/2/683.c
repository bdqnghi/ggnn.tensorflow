int main ()
{
    struct book
    {
        int num;
        char name[27];
    }b[1000];
    int m,i,j,a=0;
    int c[26];
    scanf("%d",&m);
    for (i=0;i<m;i++)
        scanf("%d%s",&b[i].num,b[i].name);
    for (i=0;i<m;i++)
    {
        for (j=0;j<strlen(b[i].name);j++)
            c[*(b[i].name+j)-'A']++;
    }
    for (i=0;i<26;i++)
        a=c[i]>c[a]?i:a;
    printf("%c\n",a+'A');
    printf("%d\n",c[a]);
    for (i=0;i<m;i++)
    {
        for (j=0;j<strlen(b[i].name);j++)
        {
            if ( *(b[i].name+j)==('A'+a))
                printf("%d\n",b[i].num);
        }
    }
return 0;
}
