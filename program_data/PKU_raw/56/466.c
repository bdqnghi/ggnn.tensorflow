int main()
{
	int n,i,scores[5],a,m;
	scanf("%d",&n);
	if(n>0&&n<10)
		a=1;
	else if(n>=10&&n<100)
		a=2;
	else if(n>=100&&n<1000)
		a=3;
	else if(n>=1000&&n<10000)
		a=4;
	else if(n>=10000&&n<=99999)
		a=5;
	for(i=a-1;i>=0;i--)
	{
		m=pow(10,i);
		scores[i]=n/m;
		n=n-scores[i]*m;
	}
	for(i=0;i<a;i++)
	{
		printf("%d",scores[i]);
	}
	return 0;
}
