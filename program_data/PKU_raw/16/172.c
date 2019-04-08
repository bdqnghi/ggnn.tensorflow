
int main(int argc, char* argv[])
{
	int n, m;
	scanf("%d",&n);
	if(n==0)
		printf("%d",0);
	else
	{
		while(n!=0)
		{
			m=n%10;
			printf("%d",m);
			n=n/10;
		}
	}
	return 0;
}


