
int main(int argc, char* argv[])
{
	int n;
	scanf("%d",&n);
	double sum=1;
	for(int i=1;i<=n;i++)
	{
	sum=sum*2;
	}

	printf("%.lf",sum);

	return 0;
}
