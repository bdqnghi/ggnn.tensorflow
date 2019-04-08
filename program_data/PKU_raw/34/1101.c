int EVEN(int a);
int ODD(int b);
int main()
{
	int d=0;
	int n;
	scanf("%d",&n);
	for(int i=0;d!=5;i++)
	{
		if(n==1)
		{
			d=5;
			printf("End\n");
		}
		else
		{
			if(n%2==0)
				n=EVEN(n);
			else
				n=ODD(n);
		}
	}
}
int EVEN(int a)
{
	printf("%d/2=%d\n",a,a/2);
	a=a/2;
	return a;
}
int ODD(int b)
{
	printf("%d*3+1=%d\n",b,b*3+1);
	b=b*3+1;
	return b;
}