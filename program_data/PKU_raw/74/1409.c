int f(int n)
{
	for(int i=2;i<=sqrt(n);i++)
	{
	if(n%i==0)
	return 0;
	}
	return 1;
}
int g(int n)
{
	int i=0;
	int a[20];
	int * p=a;int * q;
	while(n!=0)
	{
		a[i]=n%10;
		n=n/10;
		i++;
	}
	q=&a[i-1];
	while(*p==*q&&p<=q)
	{	p++;q--;}
	if(p>=q)
		return 1;
	if(p<q)
		return 0;
}
int main()
{
    int m,n,i,t=0;
	scanf("%d %d",&m,&n);
    for(i=m;i<=n;i++)
	{
		if(f(i)==1&&g(i)==1)
		{
		  if(t==0)
         printf("%d",i);
		  if(t>0)
	     printf(",%d",i);
		  t=1;
		}
	}
	if(t==0)
		printf("no");
	return 0;
}

