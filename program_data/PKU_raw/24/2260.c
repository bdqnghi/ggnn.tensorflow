int max(int a,int b)
{
    return (a>b?a:b);
}
int min(int a,int b)
{
    return (a<b?a:b);
}
int main()
{
    int i=0,j,ex,lenth[200]={0},imin=100,imax=0,k=0;
    char s[200][50],c;
    while (1)
    {
        c=getchar();
        if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
        {
            ex=1;
            lenth[k]++;
            s[k][i++]=c;
        }
        else if(ex==1)
        {
            imax=max(imax,lenth[k]);
            imin=min(imin,lenth[k]);
            ex=0;
            k++;
            i=0;
        }
        if(c=='\n')
        break;
    }
    for(i=0;;i++)
    {
        if(lenth[i]==imax)
        {
            for(j=0;j<lenth[i];j++)
            putchar(s[i][j]);
            putchar('\n');
            break;
        }

    }
    for(i=0;;i++)
    {
        if(lenth[i]==imin)
        {
            for(j=0;j<lenth[i];j++)
            putchar(s[i][j]);
            putchar('\n');
            break;
        }
    }
    return 0;
}
