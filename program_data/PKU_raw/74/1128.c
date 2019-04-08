void main()
{
	int m,n,i,j,s,p,q,b=0;
	int c[1000];
	scanf("%d%d",&m,&n);
		for(i=m;i<=n;i++)
		{
			q=0;
			p=i;
			while(p!=0)
			{
				s=p%10;
				q=10*q+s;
				p=p/10;
			}
			if(q!=i)
				goto a;
			for(j=2;j<=sqrt(i);j++)
				if(i%j==0)
					goto a;
			b++;
			c[b]=i;
            a:;
		}
	if(b==0)
		printf("no");
	else if(b==1)
		printf("%d",c[1]);
	else
	{
		printf("%d",c[1]);
		for(i=2;i<=b;i++)
			printf(",%d",c[i]);
	}
}