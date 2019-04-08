int main()
{
	int jiaogu(int m);
	int n;
	scanf("%d",&n);
	jiaogu(n);
	return 0;
}
int jiaogu(int m)
{
	int a1;
	if(m==1)
	printf("End");
	else if(m%2==1)
	{
		a1=m*3+1;
		printf("%d*3+1=%d\n",m,a1);
		return(jiaogu(a1));
	}
	else if(m%2==0)
	{
		a1=m/2;
		printf("%d/2=%d\n",m,a1);
		return(jiaogu(a1));
	}
}
