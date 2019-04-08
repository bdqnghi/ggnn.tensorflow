int main()
{
	int n,i,a,b,c,x,sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		b=(i%10);
		a=((i-b)/10);
		if(b==0) b=1;
		b=b%7;
		a=a%7;
		if(i<10) a=1;
		c=i%7;
		if(a*b*c==0) continue;
		sum+=i*i;
	}
	printf("%d\n",sum);
	return 0;
}
