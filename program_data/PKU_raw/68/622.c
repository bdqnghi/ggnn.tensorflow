int main(void)
{
int primeNo(int);
int m,k,i,t,q,n;
scanf("%d",&m);
if(m<8)
printf("6=3+3");
else
	{
	printf("6=3+3");
	for(n=8;n<=m;n+=2)
		{
		for(i=3;i<=(n/2);i+=2)
				{
				q=n-i;
				if(primeNo(i)&& primeNo(n-i))
				{
					printf("\n%d=%d+%d",n,i,q);
					break;
				}
				}
			}
	
	}
}
int primeNo(int n)
{
int k,i;
k=sqrt(n);
for(i=3;i<=k;i+=2)
		{
		if(n%i==0)
		break;
		}
	if(i<=k)
	return 0;
	else
	return 1;
}