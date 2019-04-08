int main()
{
	int n; cin>>n;
	int k;
	for (k=1;k<=n;k++)
	{
		int t,i;
		cin>>t;
		if (t==0) cout<<"60"<<endl;
		else
		{
			int time[t];
			for (i=0;i<t;i++)  cin>>time[i];
			for (i=0;i<t;i++)
				if (time[i]+3*(i+1)>=60)
				{
					if (time[i]+3*i<=60) cout<<time[i]<<endl;
					else cout<<60-3*i<<endl;
					break;
				}
			if (i==t) cout<<60-3*t<<endl;
		}
	}
	return 0;
}
