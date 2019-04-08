
int n;
int tjdm[1000],qwdm[1000];

int main()
{
	while(cin >> n)
	{
		if(n == 0)
			return 0;
		for(int i = 0;i < n;i++)
			cin >> tjdm[i];
		for(int i = 0;i < n;i++)
			cin >> qwdm[i];
		sort(tjdm,tjdm + n);
		sort(qwdm,qwdm + n);
		int sum = 0;
		int tmin = 0;
		int qmin = 0;
		int tmax = n - 1;
		int qmax = n - 1;
		while(tmin < n)
		{
			if(tjdm[tmin] > qwdm[qmin])
			{
				sum += 200;
				tmin++;
				qmin++;
			}
			else if(tjdm[tmin] < qwdm[qmin])
			{
				sum -= 200;
				tmin++;
				qmax--;
			}
			else if(tjdm[tmin] == qwdm[qmin])
			{
				if(tjdm[tmax] > qwdm[qmax])
				{
					tmax--;
					qmax--;
					sum += 200;
				}
				else if(tjdm[tmax] < qwdm[qmax])
				{
					sum -= 200;
					tmin++;
					qmax--;
				}
				else if(tjdm[tmax] == qwdm[qmax])
				{
					if(tjdm[tmin] > qwdm[qmax])
					{
						sum += 200;
					}
					if(tjdm[tmin] < qwdm[qmax])
						sum -= 200;
					tmin++;
					qmax--;
				}
			}
			if(tmax < tmin)
				break;
		}
		cout << sum << endl;
	}
}