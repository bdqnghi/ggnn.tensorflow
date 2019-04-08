int main()
{
	int t1[1000]={0}, p=0, max=0, n;
	int t2[1000]={0};
	char time1[100000], time2[100000];
	int i =1, j, k, l, m=0, ct=0;
	cin.getline(time1, 100000);
	cin.getline(time2, 100000);
	for(l=0; time1[l]>0; l++)
	{
		if(time1[l]==',')
		{
			m++;
			p++;
		}
		else
		{
			t1[m]=t1[m]*10+time1[l]-48;
		}
	}
	m=0;
	for(l=0; time2[l]>0; l++)
	{
		if(time2[l]==',')
		{
			m++;
		}
		else
		{
			t2[m]=t2[m]*10+time2[l]-48;
		}
	}
	for (j = 0; j<=999; j++)
	{
		n=0;
		for (k = 0; k<=p; k++)
		{
			if(j<t2[k] && j>=t1[k])
			{
				n++;
			}
		}
		if (max<n)
			max=n;
	}
	cout << p+1 << ' ' <<max;
	return 0;
}