//????A????006
//????????????2010? ???
int main()
{int a[11][11][5];
int m,n,i,j,k,x,y,flag=0;
cin>>m>>n;
for(j=0;j<11;j++)
{
for(k=0;k<11;k++)
a[j][k][0]=0;
}
for(x=0;x<4;x++)
{for(y=0;y<11;y++)
{a[0][y][x]=0;
a[y][0][x]=0;
a[10][y][x]=0;
a[y][10][x]=0;}
}
a[5][5][0]=m;
for(i=1;i<=n;i++)
{
for(j=1;j<10;j++)
{
for(k=1;k<10;k++)
a[j][k][i]=a[j][k][i-1]*2+a[j][k-1][i-1]+a[j][k+1][i-1]+a[j+1][k][i-1]+a[j+1][k+1][i-1]+a[j+1][k-1][i-1]+a[j-1][k-1][i-1]+a[j-1][k][i-1]+a[j-1][k+1][i-1];
}}
for(j=1;j<10;j++)
{
for(k=1;k<10;k++)
{cout<<a[j][k][n];
flag=flag+1;
if(flag!=9) cout<<" ";
else if(flag==9) 
{cout<<endl;
flag=0;}
}
}
return 0;
}