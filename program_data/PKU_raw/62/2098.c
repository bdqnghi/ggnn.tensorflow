int main()
{
    char sh[1000],ch[500]={0},temp[500];
    int n,m,i,j=0,k;
    gets(sh);
    n=strlen(sh);
    for(i=0; i<n; i++)
    {

        if(sh[i]!=' ')
        {
            ch[j]=sh[i];
            j=j+1;
        }
        if(sh[i]==' ')
        {
            if(sh[i-1]==' ')
                continue ;
            if(sh[i-1]!=' ')
                ch[j]=' ';
                 j=j+1;
        }
    }

    printf("%s",ch);
    return 0;
}
