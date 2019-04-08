int a,b;
int sushu(int a)
{
	int j;
	for(j=3;j<(int)sqrt(a)+2;j=j+2)
		if(a%2==0 || a%j==0)return 0;
	return 1;
}
int fenjie(int i)
{
	for(a=2;a<i;a++)
		if(sushu(a)&&sushu(i-a))
			return a;
}

int main(int argc, char* argv[])
{
	int n;
	int i;
	scanf("%d",&n);
	for(i=6;i<=n;i++)
	{
		if(i%2==0)
		{
			a=fenjie(i);
			b=i-a;
			printf("%d=%d+%d\n",i,a,b);
		}
	}

	return 0;
}