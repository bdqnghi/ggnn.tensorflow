int main()
{
	int i,n,j,k,m,t;
	scanf("%d",&n);
	for(i=6;i<=n;i=i+2)
	{

		for(j=3;j<=i/2;j+=2)
		{
			m=0;
			t=0;
			for(k=3;k<=sqrt(j)+1;k+=2)
			{
				if(j%k==0)
					m=1;
			}
			if(m==0)
			{
				for(k=3;k<=sqrt(i-j)+1;k+=2)
				{
					if((i-j)%k==0)
						t=1;
				}
				if(t==0)
				{
					printf("%d=%d+%d\n",i,j,(i-j));
					break;
				}
			}
		}
	}
	return 0;
}

