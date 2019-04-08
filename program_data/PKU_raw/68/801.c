void main()
{
	long n,i;
		scanf("%d",&n);
	for(i=6;i<=n;i=i+2)
	{long m=i;
	int l=3,a=1;
		do
		{int r,k;
		k=sqrt(l);
		for(r=3;r<=k;r=r+2)
			if(l%r==0)break;
			if(r>=k+1)
			{
			int s;
			s=m-l;
			int t=sqrt(s);
			int j;
			for(j=3;j<=t;j=j+2)
			if(s%j==0)break;
			if(j>=t+1)
			{
			printf("%d=%d+%d\n",m,l,s);
			a=0;}
			else l=l+2;
			}
			else l=l+2;
		}
		while(a!=0);
	}
}