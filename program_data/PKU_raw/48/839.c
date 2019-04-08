int main()
{
	int a[9][9]={0};
	int b[9][9]={0};
	int m,t;
	cin>>m>>t;
	a[4][4]=m;
	int i;int k,l;
	for(i=0;i<t;i++)
	{
		
		for(k=0;k<9;k++)
		{
			for(l=0;l<9;l++)
			{
				if(a[k][l]!=0)
				{
					b[k][l]=b[k][l]+a[k][l]*2;
					if(k>0)b[k-1][l]=b[k-1][l]+a[k][l];
					if(k<8)b[k+1][l]=b[k+1][l]+a[k][l];
					if(l>0)b[k][l-1]=b[k][l-1]+a[k][l];
					if(l<8)b[k][l+1]=b[k][l+1]+a[k][l];
					if(k>0 && l>0)b[k-1][l-1]=b[k-1][l-1]+a[k][l];
					if(k>0 && l<8)b[k-1][l+1]=b[k-1][l+1]+a[k][l];
					if(k<8 && l>0)b[k+1][l-1]=b[k+1][l-1]+a[k][l];
					if(k<8 && l<8)b[k+1][l+1]=b[k+1][l+1]+a[k][l];

				}
			}
		}
		for(k=0;k<9;k++)
		{
			for(l=0;l<9;l++)
			{
				a[k][l]=b[k][l];b[k][l]=0;
			}
		}
	}
	for(k=0;k<9;k++)
		{
			for(l=0;l<9;l++)
			{
				cout<<a[k][l];
				if(l!=8)cout<<" ";
			}
			cout<<endl;
		}
	return 0;
}