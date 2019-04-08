int jisuan(int n,int k,int b,long int a,int *p)
{
	long int sum=0;
	if(b==1)
		sum=n*a+k;
	else
	{
		sum=jisuan(n,k,b-1,a,p)*n/(n-1)+k;
		if((sum-k)%n!=0)
			*p=1;
	}
	return sum;
}
int main()
{
	int n,k,b,c=0;
	long int a,s;
	int*p;
	scanf("%d%d",&n,&k);
	b=n;
	a=1;
	p=&c;
	if(n==1)
		printf("%d\n",1+k);
	else
	{
		for(a=1;a<=1000000;a++)
		{
			*p=0;
			s=jisuan(n,k,b,a,p);
			if(*p==1)
				continue;
			if((s-k)%n==0)
				break;
				//printf("%d\n",s);
		}
		printf("%d\n",s);
	}
}