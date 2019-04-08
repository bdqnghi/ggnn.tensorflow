
int main()
{
    char a[M][N],b[M][N];
    int i,j,l,r;
    int p,pi;

for(i=0;i<M;i++)
{
    for(j=0;j<N;j++)
    {
        a[i][j]='\0';
        b[i][j]='\0';
    }
}

for(r=0;r<M;r++)
{
    gets(a[r]);
    strcpy(b[r],a[r]);

    for(j=0;j<(strlen(a[r])+1)/2;j++)
    {
        for(i=0,pi=0,p=0;b[r][i]!='\0';i++)
        {
            if(b[r][i]=='(')
            {
                p=1;
                pi=i;
            }

            if(b[r][i]==')'&&p==1)
            {
                b[r][i]='0';
                b[r][pi]='0';
                break;
            }
        }
    }
    //puts(b);

    for(i=0;b[r][i]!='\0';i++)
    {
        if(b[r][i]=='(')
        {
            b[r][i]='$';
        }

        else if(b[r][i]==')')
        {
            b[r][i]='?';
        }

        else
            b[r][i]=' ';
    }
}

for(r=0;b[r][0]!='\0';r++)
{
    puts(a[r]);
    puts(b[r]);
}

    return 0;
}