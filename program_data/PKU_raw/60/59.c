int sushu(int a)
{
	int i;
	if(a%2==0) 
		return 0;
	else
	{
	for(i=3;i<sqrt(a);i++)
		if(a%i==0) break;
	if(i>sqrt(a))
		return 1;
	else return 0;
	}
}
void main()
{
	int sushu(int a);
	int n;
	scanf("%d",&n);
	int i;
	for(i=3;(i+2)<=n;i++)
	{
		if(sushu(i)&&sushu(i+2))
			printf("%d %d\n",i,i+2);
		else continue;
	}
	for(i=3;(i+2)<=n;i++)
		if(sushu(i)&&sushu(i+2))
			break;
	if(i==n||i==n-1) printf("empty");
}