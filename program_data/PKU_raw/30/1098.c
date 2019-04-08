int main()
{
	int n,A, S, i;
	scanf("%d", &n);
	S=0;
	for(i=1;i<=n;i++)
	{
		if((i%7!=0)&&(i%10!=7)&&(i!=71)&&(i!=72)&&(i!=73)&&(i!=74)&&(i!=75)&&(i!=76)&&(i!=78)&&(i!=79))
			A=i*i, S=S+A;
		else
			A=0, S=S+A;
	}
	printf("%d", S);
	return 0;
}
