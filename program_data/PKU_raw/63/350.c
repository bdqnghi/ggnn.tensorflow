int main()
{
	int x1,y1;
	int x2,y2;
	int a[101][101];
	int b[101][101];
	int c[101][101];
	int i,j;
	int k;

	for(i=0;i<101;i++)
	{
		for(j=0;j<101;j++)
		{
		   a[i][j]=0;
		   b[i][j]=0;
		   c[i][j]=0;
		}

	}

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
		   {c[i][j]=c[i][j]+a[i][k]*b[k][j];}
	   
	   }
	}

	for(i=0;i<x1;i++)
	{
	   for(j=0;j<y2;j++)
	   {
		   if((j+1)%y2!=0)
		   {cout<<c[i][j]<<" ";}
		   else
		   {cout<<c[i][j]<<endl;}
	   
	   }
	}



return 0;


}