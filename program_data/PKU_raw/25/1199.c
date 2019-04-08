int n;
int a[1001]={0};
void count(int n)
{
	if(n==0) return;
	for(int i=1000;i>0;i--)
		a[i]=a[i]*2;
	for(int i=1000;i>0;i--)
	{
		if(a[i]>=10)
		{
			a[i]-=10;
			a[i-1]++;
		}
	}
	count(n-1);
}

int main()
{
	cin>>n;
	a[1000]=1;
	count(n);
	for(int i=0;i<1001;i++)
	{
		if(a[i])
		{
			for(int j=i;j<1001;j++)
				cout<<a[j];
			break;
		}
	}
	return 0;
}