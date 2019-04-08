
int main()
{
    int i,j,k,len,word=1;
    char a[100];
    char b[50][20];
    for(i=0;i<50;i++)
        for(j=0;j<20;j++)
            b[i][j]='!';
    fgets(a,100,stdin);
    len=strlen(a)-1;
    for(i=0;i<len;i++)
    {
        if(a[i]==' ')
            word++;
        else
            ;
    }
    j=0;
    k=0;
    for(i=0;i<len;i++)
    {
        if(a[i]!=' ')
        {
            b[word-1-j][k]=a[i];
            k++;
        }
        else
        {
            j++;
            k=0;
        }
    }

    for(i=0;i<=word;i++)
    {
        for(j=0;b[i][j]!='!';j++)
            printf("%c",b[i][j]);
        if(i<word-1)
            printf(" ");
    }
    return 0;
}
