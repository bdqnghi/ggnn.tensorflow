
int main()
{
	int n;
	cin>>n;
	int i;
	for(i=0;i<n;i++)
	{
		int a[100][100]={0};
		int k,l,sum=0;
		for(k=0;k<n;k++)
		{
			for(l=0;l<n;l++)
				cin>>a[k][l];
		}
		int h=n;
		do
		{
			for(k=0;k<h;k++)
			{
				int min=a[k][0];
				for(l=0;l<h;l++)
				{
					if(a[k][l]<=min)
						min=a[k][l];
				}
				for(l=0;l<h;l++)
					a[k][l]=a[k][l]-min;
			}
			for(l=0;l<h;l++)
			{
				int x=a[0][l];
				for(k=0;k<h;k++)
				{
					if(a[k][l]<=x)
					x=a[k][l];
				}
				for(k=0;k<h;k++)
					a[k][l]=a[k][l]-x;
			}
			sum=sum+a[1][1];
			h=h-1;
			for(k=1;k<h;k++)
			{
				for(l=0;l<h+1;l++)
					a[k][l]=a[k+1][l];
			}
			for(l=1;l<h;l++)
			{
				for(k=0;k<h;k++)
					a[k][l]=a[k][l+1];
			}
		}
		while(h>1);
		cout<<sum<<endl;
	}
	return 0;
}
