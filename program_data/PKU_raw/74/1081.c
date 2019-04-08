int huiwen(int n)
{
	int b=0,m=n;
	while(n)
	{	b=b*10+n%10;
	   n/=10;
    }
	if(b==m)
		return 1;
	else 
		return 0;
}
int sushu(int n)
{
	int i;
	if(n==2)
		return 1;
	else
		for(i=2;i<n;i++)
			if(n%i==0)
				break;
	 if(i==n)
		 return 1;
	 else 
		 return 0;

}
int main()
{
	int i,m,n,t=0;
	scanf("%d %d",&m,&n);

	for(i=m;i<=n;i++)
		if(sushu(i)&&huiwen(i))
		{   
			printf("%d",i);
			t++;
			break;
		}
	for(i++;i<=n;i++)
		if(sushu(i)&&huiwen(i))
		{   
			printf(",%d",i);
			t++;
		}
	if(t==0)
		printf("no\n");
}

