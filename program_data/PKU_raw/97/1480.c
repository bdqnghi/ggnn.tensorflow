int main()
{
	int n,s1,s2,s3,s4,s5,s6;
	int a=100,b=50,c=20,d=10,e=5,f=1;
	scanf("%d",&n);
	s1=n/100;
	s2=n%100/50;
	s3=n%100%50/20;
	s4=n%100%50%20/10;
	s5=n%100%50%20%10/5;
	s6=n%100%50%20%10%5/1;
	printf("%d\n%d\n%d\n%d\n%d\n%d\n",s1,s2,s3,s4,s5,s6);
	return 0;
}