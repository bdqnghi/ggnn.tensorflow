long int m,n;
int a[1000001];
long int i,j;
int flag;
int check(long int i)
{
	int s[100];
	long int m,flag,t;
	m=i; 
	t=0;
	while (m>0)
	{
		t++;
		s[t]=m%10;
		m=m/10;
	}
	flag=0;
	for(m=1;m<=t/2;m++) if (s[m]!=s[t-m+1]) 
	{
		flag=1;
		return(0);
		break;
	}
	if (flag==0) return(1);
}
main()
{
	for(i=1;i<=1000000;i++) a[i]=1;
	a[1]=0;
	for(i=2;i<=1000000;i++) if (a[i]==1)
		for(j=2;j<=1000000/i;j++) a[i*j]=0;
	scanf("%ld %ld",&m,&n);
	flag=0;
	for(i=m;i<=n;i++) if ((a[i]!=0)&&check(i)) 
	{
		if (flag==0) printf("%ld",i);
		else printf(",%ld",i);
		flag=1;
	}
	if (flag==0) printf("no");
	printf("\n");
}	
