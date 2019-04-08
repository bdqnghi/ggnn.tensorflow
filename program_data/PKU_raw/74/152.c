int isprime(int n)
{
	int i;
	if(n%2==0) return 0;
	for(i=3;i<=(int)sqrt(n);i+=2)
		if(n%i==0) return 0;
	return 1;
}
int isturn(int n)
{
	char num[10];
	int k=0,i;
	while(n/10!=0) 
	{
		num[k++]=n%10+'0';
		n=n/10;
	}
	num[k++]=n%10+'0';
	for(i=0;i<=k/2;i++)
		if(num[i]!=num[k-1-i]) return 0;
	return 1;
}
int main()
{
	int n,m,i,t=1,flag=0;
	scanf("%d %d",&m,&n);
	for(i=m;i<=n;i++)
		if(isprime(i)&&isturn(i)) 
			if(t==1) {printf("%d",i);t=0;flag=1;}
			else printf(",%d",i);
	printf("\n");
	if(flag==0) printf("no\n");
	return 0;
	
}