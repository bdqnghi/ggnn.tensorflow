int sushu(int n)
{
	int s,i;
	if(n==2) return 1;
	if(n==3) return 1;
	s=0;
	if(n%2==0) s=1;
	for(i=3;i<=sqrt(n);i=i+2)
	{
		if((sushu(i)==1)&&(n%i==0))
		{
			s=1;
			break;
		}
	}
	if(s==0) return 1;
	else return 0;
}
int main()
{
	int n,i,j;
	scanf("%d",&n);
	for(j=6;j<=n;j=j+2)
	{
		for(i=3;i<=j/2;i=i+2)
		{
			if((sushu(i)==1)&&(sushu(j-i)==1))
			{
				printf("%d=%d+%d\n",j,i,j-i);
				break;
			}
		}
	}
	return 0;
}
