
void main()
{
	int n,i,j=0,x;
	scanf("%d",&n);
	for(x=3;x<=n-2;x+=2)
	{
		for(i=2;i<=sqrt(x);i++)
			if(x%i==0||(x+2)%i==0||(x+2)%(i+1)==0)
				break;
		if(i>sqrt(x))
		{
			printf("%d %d\n",x,x+2);
			j++;
		}
	}
	if(j==0)
		printf("empty");
}