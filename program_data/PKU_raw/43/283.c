

int sushu(int x)
{
	int i,j;
	if(x==3)
	return 1;
	for(i=2;i<=sqrt(x);i++)
	{
		if(x%i==0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int m,i,j;
	scanf("%d",&m);
	for(i=3;i<=m/2;i=i+2)
	{
		if(sushu(i))
		{
			j=m-i;
			if(sushu(j))
			{
				printf("%d %d\n",i,j);
			}
		}
	} 
	return 0;
}
