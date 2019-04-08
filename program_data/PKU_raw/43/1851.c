int main()
{
	int m,p[1229],i,j,a,x=0,k,l;
	for(i=3;i<10000;i++)
	{
		a=sqrt(i);
		for(j=2;j<=a+1;j++)
		{
			if(i%j==0) break;
			if(j==a+1)
			{
				p[x]=i;
				x=x+1;
			}
		}
	}
	scanf("%d",&m);
	for(k=0;p[k]<=m/2;k++)
	{
		for(l=k;p[k]+p[l]<=m;l++)
		{
			if(p[k]+p[l]==m)
				printf("%d %d\n",p[k],p[l]);
		}
	}
	return 0;
}