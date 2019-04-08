int a[100]={0},l;
void count(int);
int main()
{
	int n;
	cin>>n;
	if(n==0)
		cout<<"1"<<endl;
	else
		if(n==1)
			cout<<"2"<<endl;
		else
		{
			a[0]=2;
			count(n-1);
			l=99;
			while(a[l]==0)
				l--;
			for(;l>=0;l--)
				cout<<a[l];
			cout<<endl;
		}
	return 0;
}
void count(int n)
{
	int i;
	if(n==0)
		return;
	else
	{
		for(i=0;i<99;i++)
			a[i]=a[i]*2;
		for(i=0;i<99;i++)
			if(a[i]>=10)
			{
				a[i+1]+=a[i]/10;
				a[i]=a[i]%10;
			}
	}
	count(n-1);
}

