
int sort(int, int, int);

int main()
{
	int t=0;
	cin>>t;
	int k=1;
	for (k=1;k<=t;k++)
	{
	int vacancy=0;
	int num=1;
	cin>>num;
	int i=1;
	int temp=num;
	for (i=2;i<=temp;i++)
	{
		while (temp%i==0)
		{
			vacancy=vacancy+1;
			temp=temp/i;

		}
		
	}
	cout<<sort(1,vacancy,num)<<endl;

	}
		return 0;
}

int sort(int start, int vacancy, int num)
{
	if (num<start)
		return 0;

	if (vacancy==1)
		return 1;
	
	int sum=0;
	int i=1;
	for (i=start;i<=num;i++)
	{
		if (num%i==0)
		{
			sum=sum+sort(i,vacancy-1,num/i);
		}
	}


	return sum;
}