//this program shows the proeess of jiaogu
int main()
{
	int n;
	scanf("%d",&n);
	for(;;)
	{
		if(n==1)
		{
			printf("End");
			break;
		}
		if(n%2==0)
		{
			n/=2;
			printf("%d/2=%d\n",2*n,n);
			continue;
		}
		if(n%2!=0)
		{
			printf("%d*3+1=%d\n",n,n*3+1);
			n=3*n+1;
			continue;
		}
		
	}
	return 0;
}