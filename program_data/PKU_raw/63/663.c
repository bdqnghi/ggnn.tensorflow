int main()
{
   int i,j,k;
   int a[120][120],b[120][120],c[120][120];
   memset(a,0,sizeof(a));
   memset(b,0,sizeof(b));
   memset(c,0,sizeof(c));
   int x1,y1,x2,y2;
   cin>>x1>>y1;
   for(i=0;i<x1;i++)
   {
	   for(j=0;j<y1;j++)
	   {
		   cin>>a[i][j];
	   }
   }
   cin>>x2>>y2;
   for(i=0;i<x2;i++)
   {
	   for(j=0;j<y2;j++)
	   {
		   cin>>b[i][j];
	   }
   }
   for(i=0;i<x1;i++)
   {
	   for(j=0;j<y2;j++)
	   {
		   for(k=0;k<y1;k++)
		   {
			   c[i][j]=c[i][j]+a[i][k]*b[k][j];
		   }
	   }
   }
   for(i=0;i<x1;i++)
   {
	   for(j=0;j<y2-1;j++)
	   {
		   cout<<c[i][j]<<' ';
	   }
	   cout<<c[i][j]<<endl;
   }
   return 0;

}