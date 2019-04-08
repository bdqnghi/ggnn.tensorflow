int i,n,k;

int work(int p,int n)
{
	if (n==1) k++;
	for (int i=p;i<=n;i++)
		if (n%i==0) work(i,n/i);
}
int main()
{
	int m;
	cin>>m;
	while (m>0)
		{
     cin>>n;
     k=0;
     work(2,n);
					cout<<k<<endl;
					m--;
		}
	return 0;
}
