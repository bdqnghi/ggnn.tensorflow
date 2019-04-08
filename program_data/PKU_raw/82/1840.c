

int main() {
	int N;
	cin >>N;
	const int n=N;
	int high[n];
	int low[n];
	for (int i=0;i<=n-1;i++)
	{
		cin >>high[i]>>low[i];
	}
	int contin[n];
	for (int i=0;i<=n-1;i++)
	{
		contin[i]=0;
	}
	for (int k=0;k<=n-1;k++)
	{
		for (int i=k;i<=n-1;i++)
		{
			if ((high[i]>=90)&&(high[i]<=140)&&(low[i]>=60)&&(low[i]<=90))
			{
				contin[k]=contin[k]+1;
			}
			else
				break;
		}
	}
	int max=contin[0];
	for (int i=0;i<=n-1;i++)
	{
		if (contin[i]>max)
			max=contin[i];
	}
	cout <<max<< endl;
	return 0;
}
