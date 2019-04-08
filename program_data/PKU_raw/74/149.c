int prime(int x)
{
	int q,i,flag=1;
	q=sqrt(x);
	for(i=2;i<=q;i++)
	{
		if(x/i*i==x)
		{
			flag=0;
			break;
		}	
	}
	return flag;
}
int hw(int x)
{
	int a,b,c=0;
	a=x;
	b=x;
	while(b/10>0)
	{
		c=c*10+b%10;
		b=b/10;
	}
	c=c*10+b;
	if(c==a) return 1;
	else return 0;
}
int main()
{
	int m,n,i,count=0;
	scanf("%d %d",&m,&n);
	for(i=m;i<=n;i++)
	{
		if(prime(i)==1&&hw(i)==1)
		{
			count++;
			if(count>1) printf(",");
			printf("%d",i);
		}
	}
	if(count==0)
		printf("no\n");
	else
		printf("\n");
	return 0;
}