int f(int n)
{
	int m1,m2,flag=0;
	m1=n;m2=n/10;
	while(m1!=0){
		if((m1-10*m2)==7) flag=1;
		m1=m1/10;m2=m2/10;
	}
	if(n%7==0) flag=1;
	return flag;
}
main()
{
	int i,n,sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(f(i)==0){
			sum+=i*i;

		}
	}
	printf("%d\n",sum);
}
