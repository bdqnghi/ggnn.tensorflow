int main()
{
    char str[10000][100];
    gets(str[0]);
    int i=0,j;
    while(str[i][0]!='e')
    {
                         i++;
                         gets(str[i]);
    }
    for(j=i-1;j>=0;j--)
    printf("%s\n",str[j]);
    getchar();getchar();
}
