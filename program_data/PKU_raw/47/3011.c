
int main(void)
{
	int a[100],n;
	cin >>n;
	for (int i=0;i<=n-1;i++)
	{
		cin >>a[i];
	}
	for (int i=n-1;i>=0;i--)
	{
		cout <<a[i];
		if (i!=0) cout <<" ";
	}
	return 0;
} 