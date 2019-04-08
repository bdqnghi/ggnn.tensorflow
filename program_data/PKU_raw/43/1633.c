int main()
{
	int n,a,b,i,k;
	cin>>n;
	for(a=2;a<=(n/2);a++)
	{
		int j=0;
		b=n-a;
		for(i=2;i<=sqrt(a);i++)
		{
			if(a%i==0)
				j=1;
		}
			for(k=2;k<=sqrt(b);k++)
			{
				if(b%k==0)
					j=1;
			}


		if(j==0)
			cout<<a<<" "<<b<<endl;
	}
	return 0;
}