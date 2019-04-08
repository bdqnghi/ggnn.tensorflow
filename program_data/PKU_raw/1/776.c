int times=1;
int used[1000]={0};
void fuck(int n)
{

	int i=0;
	for (i=2;i<=sqrt(n);i++)
	{
		if (used[i]==0&&n%i==0)
		{
			int j=0;
			for (j=0;j<=i-1;j++)
				used[j]=1;
			times++;
			fuck(n/i);
			for (j=0;j<=i-1;j++)
				used[j]=0;
		}
	}
}
int main()
{
	int n=0;
	int num=0;
	cin>>n;
	int i=0;
	for (i=0;i<n;i++)
	{
	cin>>num;
	fuck(num);
	cout<<times<<endl;
	times=1;
	int k=0;
	for (k=0;k<=999;k++)
	used[k]=0;
	}
	return 0;
}