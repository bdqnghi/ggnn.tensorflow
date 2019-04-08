
void count(int n)
{
	int a,b,i,j;
	if(n==1)printf("End\n");
	else
	{
		if(n%2!=0)
		{
			a=n*3+1;
			printf("%d*3+1=%d\n",n,a);
			n=a;
			count(n);
		}
		else 
		{
			b=n/2;
			printf("%d/2=%d\n",n,b);
			n=b;
			count(b);
		}
	}
}

void main()
{
	int n;
	scanf("%d",&n);
	count(n);

}