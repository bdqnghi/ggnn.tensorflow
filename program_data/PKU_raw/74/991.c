int tran(long int x)
{
	int t=0,y=x;
	while(y>0)
	{
		t=10*t+y%10;
		y/=10;
		tran(y);
	}
	if (x==t)
		return(1);
	return(0);
}
int cc(long int x)
{
	long int i;
	for (i=2;i<x;i++)
		if (x%i==0)
			break;
	if (i<x-1)
		return(0);
	return(1);
}
void main()
{
	int label=0;
    long int m,n,i,j,p=0;
	scanf("%ld%ld",&m,&n);
	for (i=m;i<=n;i++)
	{
		if (cc(i)==1 && tran(i)==1)
		{
			label++;
			if (label==1)
				printf("%ld",i);
			else printf(",%ld",i);
		}
	}
	if (label==0)
		printf("no\n");
}
