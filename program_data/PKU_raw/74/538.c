void main()
{
	int ishw(long n);
	int isprime(long n);
	long m,n,first,flag=0,i;
	scanf("%ld%ld",&m,&n);
	for(i=m;i<=n;i++)
		if(isprime(i)&&ishw(i))
		{
			printf("%d",i);
			first=i;
			flag=1;
			break;
		}
	for(i=first+1;i<=n;i++)
		if(isprime(i)&&ishw(i))
		{
			printf(",%d",i);
		}


	if(flag==0)
			printf("no\n");
}
int isprime(long n)
{
	long i,k;
	k=n/2;
	for(i=2;i<=k;i++)
		if(n%i==0)
		{
			return(0);
			break;
		}
	if(i>k)
		return(1);
	else return(0);
}
int ishw(long n)
{
	long i,j,k,place=0;
    char s[9];
	for(i=0;n!=0;i++)
	{
		s[i]=n%10;
		n/=10;
		place=i+1;
	}
		//ltoa(n,s,10);/*?????????????*/
		k=place;
		j=-1;
		do
		j++;
		while(s[j]==s[k-j-1]&&j+1<=k/2);
		if(j+1>k/2)
			return(1);
		else return(0);
}
	