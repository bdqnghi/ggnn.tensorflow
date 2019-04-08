int main()
{
	int n,i,j,k,l,x,y;
	scanf("%d",&n);
	for(i=3;i<=n/2;i=i+2)
	{
		for(k=3,x=0;k<=(i+1)/2;)
		{
			if(i%k==0)
			{
				x=x+1;
				break;
			}
			else
				k=k+2;
		}
		if(x!=0)
			continue;
		else
		{
		j=n-i;
		for(l=3,y=0;l<=j/2;)
		{
			if(j%l==0)
			{
				y=y+1;
				break;
			}
			else
				l=l+2;
		}
		if(y==0)
			printf("%d %d\n",i,j);
		}
	}
}
