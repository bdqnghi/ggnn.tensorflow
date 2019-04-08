void main()
{
	int n,a=0,b;
	scanf("%d",&n);
	b=n;
	if(b==10000)printf("00001");
	else{
	do{
	a=a*10+n%10;
	n=n/10;
	}while(n!=0);
	if(b%10==0&&b!=0)printf("0");
    if(b%100==0&&b!=0)printf("0");
	if(b%1000==0&&b!=0)printf("0");
	printf("%d\n",a);
	}
}