
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int c=0;
		int cmc,m,cmc1;
		int time=0;
		int q=0;
		cin>>m;
		if(m==0)
		{cout<<60<<endl;
		continue;}
		for(int j=0;j<m;j++)
		{
			if(q==1)
			{
					cin>>cmc1;
					continue;
			}
			cin>>cmc;
			if(time+cmc>=60&&q!=1)
			{
				cmc=60-time;
				q=1;
			}
			else if(time+cmc>=57&&q!=1)
			{
				q=1;
			}
			if(q==1)continue;
			time=time+3;
		}
		if(q==0)cmc=60-time;
		cout<<cmc<<endl;
	}

	return 0;
}