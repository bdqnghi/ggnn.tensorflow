int main(int argc, char* argv[])
{
	int n,i;
	scanf("%d",&n);
	for(i=0;n>=100;i++)
	{
		n-=100;
	}
	printf("%d\n",i);
	for(i=0;n>=50;i++)
	{
		n-=50;
	}
	printf("%d\n",i);
	for(i=0;n>=20;i++)
	{
		n-=20;
	}
	printf("%d\n",i);
	for(i=0;n>=10;i++)
	{
		n-=10;
	}
	printf("%d\n",i);
	for(i=0;n>=5;i++)
	{
		n-=5;
	}
	printf("%d\n",i);
	for(i=0;n>=1;i++)
	{
		n-=1;
	}
	printf("%d\n",i);
	return 0;
}