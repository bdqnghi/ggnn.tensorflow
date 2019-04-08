
void main()
{
	int n,i,a;
	scanf("%d", &n);
	int num[5];
	a=100000;
	for(i=0;i<=4;i++)
	{
		a=a/10;
		num[i]=(n/a)%10;
	}
	if(num[0]!=0)
	{
		printf("%d%d%d%d%d",num[4],num[3],num[2],num[1],num[0]);
	}
	else if(num[1]!=0)
	{
		printf("%d%d%d%d",num[4],num[3],num[2],num[1]);
	}
	else if(num[2]!=0)
	{
		printf("%d%d%d",num[4],num[3],num[2]);
	}
	else if(num[3]!=0)
	{
		printf("%d%d",num[4],num[3]);
	}
	else printf ("%d",num[4]);
}