int t;//t???
void f(int n,int d)//n?????d???
{
	int i;
	if(n==1)//
		t++;
	else
	{
		for(i=d;i<=n;i++)
		{
			if(n%i==0)
			{
				f(n/i,i);
			}
		}
	}
}
int main()
{
	int number[100];
	int n,i;
	int result[100];
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>number[i];
	}
	for(i=0;i<n;i++)
	{
		t=0;
		f(number[i],2);
		result[i]=t;
	}
	for(i=0;i<n;i++)
	{
		cout<<result[i]<<endl;
	}
	return 0;
}
			
