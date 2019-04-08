int turn(int m)
{
	int n,k;
	n=m;
	int i=0;
	int a[100];
	while(n!=0)
	{a[i]=n%10;i++;n/=10;}
	k=i;
	for(i=0;i<k;i++)
	{
		n*=10;
		n+=a[i];
	}
	if(n==m)return 1;
	else return 0;
}
		



int check(int m)
{
	int i,test1=1,test=0;
	for(i=2;i<=sqrt(m);i++)if(m%i==0)test1=0;
	if(test1!=0)test+=1;
	if(turn(m))test+=1;
	if(test==2)return 1;
	else return 0;
}

void main()
{
	int m,n,t=0,i;
	scanf("%d%d",&m,&n);
	for(i=m;i<=n;i++)
	{
		if(check(i)&&t==0){printf("%d",i);t=1;}
		else if(check(i))printf(",%d",i);
	}
	if(t==0)printf("no");
}
