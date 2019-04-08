int main()
{
	int m,n,k,z,r,i;
	scanf("%d%d",&n,&k);
	for(m=n;;m++)
	{
		r=m;
		for(i=1;i<=n;i++)
		{
            z=m-m/n*n;
			if(z!=k)
				break;
			else
				m=m/n*n-m/n;
		}
		if(i==n+1&&m>=1)
		{
			printf("%d\n",r);
			break;
		}
		else
		m=r;

	}
	return 0;
}
