int main()
{
	int n;cin>>n;//?????n
	for(int i=1;i<=n;i++)
	{
		int m,a[20]={0};cin>>m;//??????m
		for(int j=1;j<=m;j++)
			cin>>a[j];//??????????
		if(a[m]+3*m<60)
			cout<<60-3*m<<endl;//??a[m]+3*m<60,????60-3*m
		else //??
		{
			for(int j=1;j<=m;j++)//?j=1??
			{
				if(a[j]+3*(j-1)>60)//??a[j]+3*(j-1)>60
				{
					cout<<60-3*(j-1)<<endl;//??60-3*(j-1)
					break;
				}
				else if(a[j]+3*j>60)//??a[j]+3*j>60
				{
					cout<<a[j]<<endl;//??a[j]
					break;
				}
			}
		}
	}
	return 0;
}