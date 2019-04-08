int main()
{int a[11][11],b[11][11],m,n,i,j,k;
cin>>m>>n;
for(i=0;i<11;i++)
{for(j=0;j<11;j++)
{a[i][j]=0;
b[i][j]=0;}}
a[5][5]=m;
for(k=0;k<n;k++)
{for(i=1;i<10;i++)
{for(j=1;j<10;j++)
b[i][j]=a[i][j]+a[i-1][j-1]+a[i-1][j]+a[i-1][j+1]+a[i][j-1]+a[i][j]+a[i][j+1]+a[i+1][j-1]+a[i+1][j]+a[i+1][j+1];}
for(i=1;i<10;i++)
{for(j=1;j<10;j++)
a[i][j]=b[i][j];}}
for(i=1;i<10;i++)
{for(j=1;j<9;j++)
{cout<<a[i][j]<<" ";}
cout<<a[i][9]<<endl;}
return 0;}