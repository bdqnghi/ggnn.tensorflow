int main()
{
	int a,j,n,k,b,sum;
	cin>>n;
	sum=0;
	for(j=1;j<=n;j++)
	{
		b=0;
		k=j;
		while(j>0)
		{
			a=j%10;
			j=j/10;
			if(a==7)
				b=1;
		}
		if(k%7==0)
			b=1;
		if(b==0)
			sum+=k*k;
		j=k;
	}
	cout << sum <<endl;
	return 0;
}

