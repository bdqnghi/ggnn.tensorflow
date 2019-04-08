int sushu(long x)
{
	long h;
	for(h=2;h<=sqrt(x);h++)
		if(x%h==0) return 0;
	return 1;
}
int huiwen(long x)
{
	long y=0,z=x;
	while(x!=0)
	{
		y=y*10+x%10;
		x=x/10;
	}
	if(z==y) return 1;
	else return 0;
}

void main()
{
	long int m,n,i,k=0,a[1000];
	scanf("%ld %ld",&m,&n);
	for(i=m;i<=n;i++)
	{
		if(sushu(i)&&huiwen(i)) {k++;a[k]=i;}
	}
	if(k!=0){
	for(i=1;i<k;i++)
		printf("%ld,",a[i]);
	printf("%ld\n",a[k]);}
	else printf("no");
}