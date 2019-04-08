int main()
{
   int x1,y1,x2,y2,a[100][100],b[100][100],c[100][100],i,j,k,m;
   cin>>x1>>y1;
   for(i=0;i<x1;i++)
	   for(j=0;j<y1;j++)
	   {cin>>a[i][j];}
   cin>>x2>>y2;
   for(i=0;i<x2;i++)
	   for(j=0;j<y2;j++)
	   {cin>>b[i][j];}
   for(i=0;i<x1;i++)
   {
	   for(j=0;j<y2-1;j++)
	   {
		   for(k=0;k<x2;k++)
			   c[i][j]=c[i][j]+a[i][k]*b[k][j];
		   cout<<c[i][j]<<" ";
	   }
	   for(m=0;m<x2;m++)
		   c[i][y2-1]=c[i][y2-1]+a[i][m]*b[m][y2-1];
	   cout<<c[i][y2-1]<<endl;
   }
    return 0;
}