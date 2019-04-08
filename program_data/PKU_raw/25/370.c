int num[101]={2};
int mul();
int main()
{
	int i;
	int n;
	int a;
	cin>>n;
	if (n==0)
		cout<<'1'<<endl;
	else
	{
	for (i=0;i<n-1;i++)
		mul();
	for (i=100;i>=0;i--)
		if (num[i]!=0)
		{
			a=i;
			break;
		}
	for (i=a;i>=0;i--)
		cout<<num[i];
	cout<<endl;
	}
return 0;
}
int mul()
{
	int i;
	int temp[101]={0};
	for (i=0;i<101;i++)
		temp[i]=2*num[i];
	for (i=0;i<101;i++)
	{
		if (temp[i]>9)
		{
			temp[i+1]+=temp[i]/10;
			num[i]=temp[i]%10;
		}
		else
			num[i]=temp[i];
	}
	return 0;
}