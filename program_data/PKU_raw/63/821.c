int main()
{  int a[100][100],b[100][100],c[100][100];
   int i,j,k,num=0,x1,y1,x2,y2;
   cin>>x1>>y1;
   for(i=0;i<x1;i++)
	   for(j=0;j<y1;j++)
		   cin>>a[i][j];
   cin>>x2>>y2;
   for(i=0;i<x2;i++)
	   for(j=0;j<y2;j++)
		   cin>>b[i][j];
   for(i=0;i<x1;i++)
	   for(j=0;j<y2;j++)
	   { num=0;
		 for(k=0;k<y1;k++)
	     num+=(a[i][k]*b[k][j]);
   c[i][j]=num;}
	   for(i=0;i<x1;i++)
		   {if(i>0) cout<<endl;
	   for(j=0;j<y2;j++)
	   { cout<<c[i][j];
	   if(j<y2-1) cout<<' ';}}
	   return 0;


}