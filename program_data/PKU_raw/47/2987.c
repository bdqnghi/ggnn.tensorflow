

int main() {
	int N;
	cin >>N;
	const int n=N;
	int a[n];
	for (int i=0;i<=n-1;i++)
	{
		cin >>a[i];
	}
	int b[n];
	for (int i=0;i<=n-1;i++)
	{
		b[i]=a[n-i-1];
	}
	for (int i=0;i<=n-1;i++)
	{
		cout <<b[i];
		if (i<n-1)
			cout <<" ";
	}
	return 0;
}