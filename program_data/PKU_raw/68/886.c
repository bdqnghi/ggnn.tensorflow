int main()
{
	int n;
	cin>>n;
	int i;
	for(i=6;i<=n;i=i+2)
	{
		int j=3;
		int k=3,t=0,l=0;
        int p=0;
		while(1)
		{
		   p=0;
		   t=0;
		   l=0;
			for(k=3;k<=sqrt(j);k++)
		{
			if(j%k==0)
				t=1;
		}
		//if(t==0)
	//	{
			for(k=3;k<=sqrt(i-j);k++)
			{
				if((i-j)%k==0)
					l=1;
			}
	//	}
		if(t==0&&l==0)
		{
			cout<<i<<"="<<j<<"+"<<i-j<<endl;
			break;
			p=1;
		}
		j=j+2;
		}
	//	while(p==0);
	}
	return 0;
}