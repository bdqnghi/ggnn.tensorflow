int check(int k)
{
	int x;
	if((k%2==0)&&(k!=2))
		return 0;
	for(x=3;x<=sqrt(k);)
	{
		if(k%x==0)
			break;
		x+=2;
	}
	if(x>sqrt(k))
		return 1;
	else 
		return 0;
}
void main()
{
	int n,i,j,m;
	scanf("%d",&n);
	for(i=6;i<=n;)
	{
		for(j=2;;j++)
		{
			if(check(j))
			{
				m=i-j;
				if(check(m))
				{
					printf("%d=%d+%d\n",i,j,m);
					break;
				}
			}
		}
		i+=2;
	}
}


