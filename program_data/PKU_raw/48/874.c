

int main()
{
	int a[9][9]={0},b[9][9]={0};
	int m,n;
	int i,j,k,fx,fy;
	cin>>m>>n;
	a[4][4]=m;
	for(int k=0;k<n;k++)
	{
		memset(b,0,sizeof(b));
		for(i=1;i<8;i++)
			for(j=1;j<8;j++)
			{
				b[i][j]+=a[i][j];
				for(fx=-1;fx<=1;fx++)
					for(fy=-1;fy<=1;fy++)
						b[i+fx][j+fy]+=a[i][j];
			}
		memcpy(a,b,sizeof(a));
	}
	for(i=0;i<9;i++)
	{
		cout<<a[i][0];
		for(j=1;j<9;j++)
		{
			cout<<' '<<a[i][j];
		}
		cout<<endl;
	}
	return 0;
}