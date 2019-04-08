
int main()
{
	int a,b,c,d,e,f;
	int result;
	do
	{
		scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
		if (a!=0)
		{
			result=(N*N-b*N-c)+(d-a+11)*N*N+(e*N+f);
			printf("%d\n",result);
		}
	}
	while(a!=0);
	return 0;
}