

int main()
{
	int n=0;
	cin >> n;
	int a[n];
	int i,j=0;
	int f1,f2,p=0;
	for(i=1;i<=n;i++)
	{
		cin >> a[i];
	    f1=1;
	    f2=1;
	    p=1;
		if(a[i]==1||a[i]==2) cout <<"1" <<endl;
		else
		{
			for(j=1;j<=a[i]-1;j++)
			{
				p=f1;
				f1=f2;
				f2=f2+p;
			}
			cout << f1 <<endl;
		}
	}
return 0;
}