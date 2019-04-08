
int main()
{
	int n;
	cin>>n;
	for (int t=0;t<n;t++)
	{
		int time=0,ans=0,m;
		cin>>m;
		int point[100];
		for (int i=0;i<m;i++)
			cin>>point[i];
		for (int i=0;i<m;i++)
		{
			time+=point[i]-ans;        //??????
			if (time>60)               //?????????
			{
				ans=point[i]-(time-60);
				break;
			}
			else ans=point[i];          //??????
			time+=3;                    //????????
			if (time>60) break;         //?????????
		}
		if (time<60) ans+=60-time;           //??????????
		cout<<ans<<endl;
	}
	return 0;
}
