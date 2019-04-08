int main ()
{
	void reverse(int num);
	int num,i;
	for(i=1;i<=6;i++)
	{
		scanf("%d",&num);
		if(num>0)
			reverse(num);
		else if(num==0)
			printf("0\n");
		else
		{
			printf("-");
			reverse(-num);
		}
	}
	return 0;
}
void reverse(int num)
{
	int a;
	while(num>0)
	{
		if(num%10==0)
		{
			num/=10;
		}
		else
			break;
	}
	while(num>0)
	{
		printf("%d",num%10);
		num/=10;
	}
	printf("\n");
}