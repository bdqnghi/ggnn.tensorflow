int main()
{
	int x1, y1, x2, y2, a[100][100]={0}, b[100][100]={0},c[100][100]={0};
	cin>>x1>>y1;
	for(int i=0; i < x1; i++)
	{
		for(int j=0; j < y1; j++)
		{
			cin>>a[i][j];
		}
	}
	cin>>x2>>y2;
	for(int i2=0; i2 < x2;i2++)
	{
		for(int j2=0;j2 < y2; j2++)
		{
			cin>>b[i2][j2];
		}
	}
	for(int i3=0; i3 < x1;i3++)
	{
		for(int i4=0; i4 < y2;i4++)
		{
			for(int i0=0; i0 < x2; i0++)
			{
				c[i3][i4]=c[i3][i4]+a[i3][i0]*b[i0][i4];
			}
		}
	}
	for(int i5=0; i5 < x1; i5++)
	{
		for(int i6=0;i6 < y2; i6++)
		{
			if(i6 == (y2-1))
			{
				cout<<c[i5][i6]<<endl;
			}
			else
			{
				cout<<c[i5][i6]<<" ";
			}
		}
	}
return 0;
}
