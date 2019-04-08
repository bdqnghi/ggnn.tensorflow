short int n;
short int tianji[1010];
short int qiwang[1010];
int main()
{
	while(scanf("%d",&n))
	{
		if(n == 0)
			break;
		for(int i = 0 ;i < n; i++)
			scanf("%d",&tianji[i]);
		for(int i = 0 ;i < n; i++)
			scanf("%d",&qiwang[i]);
		sort(tianji,tianji+n);
		sort(qiwang,qiwang+n);
		short int tianjigood, qiwanggood, tianjibad,qiwangbad;
		tianjigood = qiwanggood= n-1;
		tianjibad = qiwangbad = 0;
		short int cnt = 0;
		while(tianjigood >= tianjibad)
		{
			if(tianji[tianjibad] > qiwang[qiwangbad])
			{
				cnt++;
				tianjibad++;
				qiwangbad++;
				continue;
			}
			if(tianji[tianjibad] < qiwang[qiwangbad])
			{
				cnt--;
				tianjibad++;
				qiwanggood--;
				continue;
			}
			if(tianji[tianjigood] > qiwang[qiwanggood])
			{
				cnt++;
				tianjigood--;
				qiwanggood--;
				continue;
			}
			if(tianji[tianjigood] < qiwang[qiwanggood])
			{
				cnt--;
				tianjibad++;
				qiwanggood--;
				continue;
			}
			if(tianji[tianjibad] < qiwang[qiwanggood])
				cnt--;
			tianjibad++;
			qiwanggood--;
		}
		printf("%d\n",200*cnt);
	}
}
