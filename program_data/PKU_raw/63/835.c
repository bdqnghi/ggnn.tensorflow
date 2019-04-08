int main()
{
 int x1,y1,x2,y2,a[100][100],b[100][100],c[100][100];
 cin>>x1>>y1;
 cout<<endl;
 for(int i=0;i<x1;i++)
 {
  for(int j=0;j<y1;j++)
   {
     cin>>a[i][j];}
  cout<<endl;
 }
  cin>>x2>>y2;
   cout<<endl;
 for(int i=0;i<x2;i++)
 {
  for(int j=0;j<y2;j++)
   {
     cin>>b[i][j];}
  cout<<endl;
 }
 for(int i=0;i<x1;i++)
 {
  for(int j=0;j<y2;j++)
   {
     c[i][j]=0;}
 }
for(int i=0;i<x1;i++)
 {
  for(int j=0;j<y2;j++)
   {
    for(int k=0;k<x2;k++)
     c[i][j]+=a[i][k]*b[k][j];
   }
  }
for(int i=0;i<x1;i++)
 {
  for(int j=0;j<y2-1;j++)
   {
     cout<<c[i][j]<<" ";
    }
  cout<<c[i][y2-1];
  cout<<endl;
 }
 return 0;
}
