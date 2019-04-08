
int main()
{
	int n;
	cin>>n;
	for (int i=0;i<n;i++)
	{
		int m;
		cin>>m;
		int time=60;
		int temp;
		for (int i=0;i<m;i++)
		{
			cin>>temp;
			if (time-3>=temp)
				time-=3;
			else if (time-3<temp&&time>temp) time=temp;
		}
		cout<<time<<endl;
	}
	return 0;
}
