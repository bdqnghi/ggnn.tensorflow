
void main()
{
	int i,j,m,n,k,r;
	scanf("%d %d",&n,&k);
	for(m=n;;m++)
	{
        r=m;
		for(i=1;i<=n;i++)
		{
			if(k!=r-(r/n)*n) {r=r-k-r/n;break;}
			else r=r-k-r/n;
		}
        if(i==n+1&&r/(n-1)>=1) break;
	}
	printf("%d\n",m);
}