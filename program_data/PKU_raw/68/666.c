void main()
{
	int N,n,m,i,j,flag;
	scanf("%d",&N);
	for(n=6;n<=N;n+=2)
	{
		for(m=3;m<n;m+=2)
			{
			flag=1;
			for(i=2;i<=sqrt(m);i++)
				if(m%i==0){flag=0;break;}
			if(flag==1)
				{
				m=n-m;
				for(i=2;i<=sqrt(m);i++)
					if(m%i==0){flag=0;break;}
				}
			else continue;
			if(flag==1){printf("%d=%d+%d\n",n,n-m,m);break;}
			m=n-m;
			}
	}
}