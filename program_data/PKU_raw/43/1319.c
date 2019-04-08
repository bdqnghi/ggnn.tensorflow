int prime(int a)
{
	int k=2;
	while(k<=a/2)
	{
		if(a%k==0) {return 0;break;}
		else k++;
	}
	if(k>a/2) return 1;
}
int main ()
{
	int n,i;
	scanf("%d",&n);
	for(i=3;i<=n/2;i++)
		if(prime(i)==1&&prime(n-i)==1)
			printf("%d %d\n",i,n-i);
}
