
int num[36];

void mult ()
{
	int i;
	for (i=0;i<35;i++)
		num[i]=num[i]*2;
	for (i=0;i<35;i++)
	{
		num[i+1]=num[i+1]+num[i]/10;
		num[i]=num[i]%10;
	}
}

int main()
{
    num[0]=1;
	int i,n;
	cin>>n;
	for (i=1;i<=n;i++) mult();
	int flag=0;
	for (i=35;i>=0;i--)
	{
		if (num[i]!=0) flag=1;
		if (flag==1) cout<<num[i];
	}
	return 0;
}