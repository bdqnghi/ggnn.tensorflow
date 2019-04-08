void course(char a[],int n)
{
    int i,j,k;
    for(k=0;k<n;k++)
    {
        if(a[k]==')')
        a[k]='?';
        else if(a[k]=='(')
        a[k]='$';
        else a[k]=32;
    }
    for(k=0;k<n;k++)
    {
        for(i=0;i<n-1;i++)
        {
            if(a[i]=='$')
            {
                for(j=i+1;j<n;j++)
                {
                    if(a[j]=='$')
                    break;
                    else if(a[j]=='?')
                    {
                        a[i]=32;
                        a[j]=32;
                        break;
                    }
                    else continue;
                }
            }
        }
    }
}
int main()
{
    char a[10000];
    int n,m,j;scanf("%d",&m);
    for(j=0;j<m;j++)
    {
		scanf("%s",a);
        puts(a);
        n=strlen(a);
        course(a,n);
        puts(a);
    }
    return 0;
}