int main()
{
	int n;
	cin>>n;
	int a[100]={0};
    int i=0,b=n,j;
	do
	{
		b=b/10;
		i++;
	}
	while (b!=0);
	for(j=0;j<i;j++)
	{
		a[j]=n%10;
		n = n /10;
	}
	for(i=0;i<j;i++)
		cout<<a[i];
	return 0;
}