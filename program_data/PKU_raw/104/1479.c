//???
int main()
{
	int a[11],b[11],sum[11]={0,1,3,7,15,31,63,127,255,511,1023};
	int x,y,i,x0,y0;
	cin>>x>>y;
	for (i=0;i<11;i++)//??x?y????
	{
		if (x>sum[i]&&x<=sum[i+1])
			x0=i+1;
		if (y>sum[i]&&y<=sum[i+1])
			y0=i+1;
	}
	a[x0]=x;
	b[y0]=y;
	for (i=x0-1;i>0;i--)//??x???
	{
		a[i]=a[i+1]/2;
	}
	for (i=y0-1;i>0;i--)//??y???
	{
		b[i]=b[i+1]/2;
	}
	if (x0>=y0)
	{
		for (i=x0;i>0;i--)
		{
			if (a[i]==b[i])
			{
				cout<<a[i]<<endl;
				break;
			}
		}
	}
	else
	{
		for (i=y0;i>0;i--)
			{
				if (a[i]==b[i])
				{
					cout<<a[i]<<endl;
					break;
				}
			}
	}
	return 0;
}