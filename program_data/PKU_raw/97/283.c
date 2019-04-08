int main()
{
	int n;
	scanf("%d",&n);
	printf("%d\n",n/100);
	n%=100;
	if(n>=50){
		printf("1\n");
		n-=50;
	}
	else printf("0\n");
	printf("%d\n",n/20);
	n-=20*(n/20);
	if(n>=10){
		printf("1\n");
		n-=10;
	}
	else printf("0\n");
	if(n>=5){
		printf("1\n");
		n-=5;
	}
	else printf("0\n");
	printf("%d\n",n);
	return 0;
}