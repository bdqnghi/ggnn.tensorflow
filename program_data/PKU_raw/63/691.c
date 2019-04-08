int main ()
{
 int  x1,x2,y1,y2,i,j,k,m;
 cin>>x1>>y1;
 int a[x1][y1];
 for (i=0;i<x1;i++)
 for (j=0;j<y1;j++)
 cin>>a[i][j];
 cin>>x2>>y2;
 int b[x2][y2];
 for (i=0;i<x2;i++)
 for (j=0;j<y2;j++)
 cin>>b[i][j];
 int c[x1][y2];
 k=x2-1;
 for (i=0;i<x1;i++)
 for (j=0;j<y2;j++)
 {
 	c[i][j]=0;
	 for (m=0;m<=k;m++)
 	{
	 	c[i][j]+=a[i][m]*b[m][j];
	 }
 }
 for (i=0;i<x1;i++)
 {
  for (j=0;j<y2-1;j++)
  {
 	cout<<c[i][j]<<" ";
  }
  cout<<c[i][y2-1]<<endl;
 }
 return 0;
 
}