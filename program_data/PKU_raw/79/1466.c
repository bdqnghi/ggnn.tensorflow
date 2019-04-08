int main()
{
	int m,n,i,j=0,f[300],a[100];
	f[1]=0;
		while (cin>>n>>m)
		{
			if (n==0&&m==0)
				break;
			j++;
			for(i=2;i<=n;i++)
				f[i]=(f[i-1]+m)%i;
			a[j]=f[n]+1;

		}
		for(i=1;i<=j;i++)
			cout<<a[i]<<endl;
	return 0;
}