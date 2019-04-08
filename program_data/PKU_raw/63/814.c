int main()
{
int x,y;
cin>>x>>y;
const int x1=x,y1=y;
int a[x1+1][y1+1];
for(int i=1;i<x1+1;i++)
  for(int j=1;j<y1+1;j++)
    cin>>a[i][j];
cin>>x>>y;
const int x2=x,y2=y;
int b[x2+1][y2+1];
for(int i=1;i<x2+1;i++)
  for(int j=1;j<y2+1;j++)
    cin>>b[i][j];
int c[x1+1][y2+1];
for(int i=1;i<x1+1;i++)
  for(int j=1;j<y2+1;j++)
    {
     c[i][j]=0;
     for(int k=1;k<y1+1;k++)c[i][j]+=a[i][k]*b[k][j];
    }
for(int i=1;i<x1;i++)
  {
  for(int j=1;j<y2;j++)cout<<c[i][j]<<' ';
  cout<<c[i][y2]<<endl;      
  }
for(int i=1;i<y2;i++)cout<<c[x1][i]<<' ';
cout<<c[x1][y2];
return 0;
}