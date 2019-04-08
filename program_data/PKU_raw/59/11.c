int main()
{
        char a[102][102][101];
        int n,m,i,j,l,k,ill=0;
        for(i=0;i<=101;i++)
        for(j=0;j<=101;j++)
        for(l=0;l<=100;l++) a[i][j][l]='#';

        cin>>n;
        for(i=1;i<=n;i++)
        for(j=1;j<=n;j++) cin>>a[i][j][1];
        cin>>m;
        for(i=0;i<=n;i++)
        for(j=0;j<=n;j++)
        for(l=2;l<=m;l++) a[i][j][l]=a[i][j][1];

        for(k=2;k<=m;k++)
        {
                for(i=1;i<=n;i++)
                for(j=1;j<=n;j++)
                   if(a[i][j][k-1]=='@')
                   {
                        if(a[i+1][j][k]=='.') a[i+1][j][k]='@';
                        if(a[i-1][j][k]=='.') a[i-1][j][k]='@';
                        if(a[i][j+1][k]=='.') a[i][j+1][k]='@';
                        if(a[i][j-1][k]=='.') a[i][j-1][k]='@';
                   }
        }

        for(i=1;i<=n;i++)
           for(j=1;j<=n;j++) if(a[i][j][m]=='@') ill++;
        cout<<ill;
        return 0;
}