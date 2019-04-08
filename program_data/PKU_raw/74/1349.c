int Reverse(int num,int renum)
{
	if(num==0)return renum;
	else return Reverse(num/10,renum*10+num%10);
}
int isReverse(int n)
{
	if(Reverse(n,0)==n)
		return 1;
	else
		return 0;
}
int isPrime(int n,int limit,int num)
{
	if(num>limit) return 1;
	else if(n%num==0) return 0;
	else return isPrime(n,limit,num+1);
}

int main()
{
	int n,m,i,j=0;
	int limit,a[300];
	char str[300];
	scanf("%d %d",&m,&n);
	for(i=m;i<=n;i++)
	{
		limit=sqrt(i);
		if(isPrime(i,limit,2)&&isReverse(i))
		      a[j++]=i;
	}
	for(i=0;i<j-1;i++)
		str[i]=',';
	str[j-1]='\n';
	for(i=0;i<j;i++)
		printf("%d%c",a[i],str[i]);
	if(j==0)
		printf("no\n");
	return 0;
}