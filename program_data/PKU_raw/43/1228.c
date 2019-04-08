
int main()
{
	double n;
	cin >> n;
	int i,j;
	int k,l;
	double t,s;
	for(i=3;i<=n/2;i+=2)
	{
		t=sqrt((double)i);
		for(j=2;j<=t;j++)
		{
			if(i%j==0)
				break;
		}
		if(j>t)
		{
			l=n-i;
			s=sqrt((double)l);
			for(k=2;k<=s;k++)
			{
				if(l%k==0)
					break;
			}
			if(k>s)
			{
				cout << i << " "<< l<<endl;
			}
		}
	}
	return 0;
}	