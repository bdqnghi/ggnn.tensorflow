
int main()
{
	int i,j,m,p=1,n,q=1;
	scanf("%d",&m);
	for(i=3;i<m/2+1;i=i+2)
	{    p=1;q=1;
		for(j=3;j<i/3+1;j=j+2)
		{
			if(i%j==0)
			{
				p=2;
				break;
			}
			else
				continue;
		}
		
if(p==1)
{
	n=m-i;
	for(j=3;j<n/3+1;j=j+2)
	{
		if(n%j==0)
			{q=2;
		break;}
		else
			continue;
	}
}else
	continue;

	if(p==1&&q==1)
		printf("%d %d\n",i,n);


		
}
}