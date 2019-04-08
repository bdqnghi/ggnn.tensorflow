int main()
{
   int x1,y1,x2,y2,i,j,t;
   int a[101][101],b[101][101],c[101][101];
   cin>>x1>>y1;
   for(i=1;i<=x1;i++)
   {
       for(j=1;j<=y1;j++)
	   {
	   cin>>a[i][j];
	   }
   }
   cin>>x2>>y2;
    for(i=1;i<=x2;i++)
   {
       for(j=1;j<=y2;j++)
	   {
	   cin>>b[i][j];
	   }
   }
	 for(i=1;i<=x1;i++)
   {
       for(j=1;j<=y2;j++)
	   {
		   c[i][j]=0;
		   for(t=1;t<=y1;t++)
		   {
			   c[i][j]=c[i][j]+a[i][t]*b[t][j];
		   }
	   }
   }
	  for(i=1;i<=x1;i++)
   {
       cout<<c[i][1];
	   if(y2==1)
		   cout<<endl;
	   else
	   {
		  for(j=2;j<y2;j++)
	   {
		  cout<<' '<<c[i][j];
		}
		  cout<<' '<<c[i][y2]<<endl;
	   }
   }
return 0;	 
   
}