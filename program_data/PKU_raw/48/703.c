int a[31][11][11]={0};
int m;
void f(int k)
{int i,j;

 if(k<m+1){
   for(i=1;i<=9;i++)
   {for(j=1;j<=9;j++)
     {a[k][i][j]=2*a[k-1][i][j]+a[k-1][i+1][j]+a[k-1][i-1][j]+a[k-1][i][j+1]+a[k-1][i][j-1]+a[k-1][i+1][j+1]+a[k-1][i-1][j+1]+a[k-1][i+1][j-1]+a[k-1][i-1][j-1];}}
    f(k+1);}
else
{for(i=1;i<=9;i++)
  {for(j=1;j<9;j++)
    cout<<a[m][i][j]<<" ";
   cout<<a[m][i][9];
cout<<endl;}}
}
int main()
{
  int n;
  cin>>n>>m;
  a[0][5][5]=n;
  f(1);
return 0;
}

