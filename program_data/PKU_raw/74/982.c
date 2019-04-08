int huiwen(int a)
{
	int b=0,t;
	t=a;
	while(a!=0)
	{
		b=b*10+a%10;
		a/=10;
	}
	if(t==b) return(1);
	else return(0);
}
int sushu(int a)
{
	int i;
	if(a==2) return(1);
	for(i=2;i<sqrt(a)+1;i++)
	{
		if(a%i==0) return(0);
	}
	return(1);
}
void main()
{
	int n,m,t=0,k,i;
	scanf("%d%d",&m,&n);
	for(k=m;k<=n;k++)
	{
		if(huiwen(k)==1&&sushu(k)==1) 
		{
			printf("%d",k);
			t++;
			break;
		}
	}
	for(i=k+1;i<=n;i++)
	{
		if(huiwen(i)==1&&sushu(i)==1)
		{
			printf(",%d",i);
			t++;
		}
	}
	if(t==0) printf("no");
}



