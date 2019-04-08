int f(int x)
{
	int i;
	for(i=2;i<=sqrt(x);i++)
		if(x%i==0)
			return 0;
		return 1;
}
void main()
{
	int n,i,j;
	scanf("%d",&n);
	for(i=6;i<=n;i+=2)
		for(j=3;j<=i/2;j+=2){
			if((f(j))&&(f(i-j)))
				{printf("%d=%d+%d\n",i,j,i-j);
			break;}
}
}
