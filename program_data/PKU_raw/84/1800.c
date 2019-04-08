
int main(int argc, char* argv[])
{
	int n;
	scanf("%d",&n);
	int a,b;
	scanf("%d%d",&a,&b);
	int i;
	for(i=0;i<(n-2);i++)
	{
		int k;
		scanf("%d",&k);
		if(k>a)
		{
			b=a;
			a=k;
		}
		else if(k>b)
		{
			b=k;
		}
	}
	printf("%d\n",a);
    printf("%d\n",b);
	return 0;
}