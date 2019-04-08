int main ()
{
    int n,s,i,i0,j,m;    
    char a[101][101],b[101][101];
    scanf("%d\n",&n);
    for(i=0;i<n;i++) gets(a[i]);
    scanf ("%d",&m);
    for(i0=1;i0<m;i0++)
    {
    for(i=0;i<n;i++)
    for(j=0;j<n;j++) b[i][j]=a[i][j];
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    {
                    if(b[i][j]!='@') continue;
                    if(i==0 && b[i+1][j]!='#') a[i+1][j]='@';
                    else
                    if(i==(n-1) && b[i-1][j]!='#') a[i-1][j]='@';
                    else
                    {if(b[i+1][j]!='#') a[i+1][j]='@';
                    if(b[i-1][j]!='#') a[i-1][j]='@';}
                    if(j==0 && b[i][j+1]!='#') a[i][j+1]='@';
                    else
                    if(j==(n-1) && b[i][j-1]!='#') a[i][j-1]='@';
                    else
                    {if(b[i][j+1]!='#') a[i][j+1]='@';
                    if(b[i][j-1]!='#') a[i][j-1]='@';}
                    }
    }
    s=0;
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    if(a[i][j]=='@') s++;
    printf("%d\n",s);
    return 0;
}
