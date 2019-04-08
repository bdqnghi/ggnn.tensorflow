int main()
{
	int n,hundred,fifty,twenty,ten,five,one;
	scanf("%d",&n);
	hundred=n/100,n=n%100;
	fifty=n/50,n=n%50;
	twenty=n/20,n=n%20;
	ten=n/10,n=n%10;
	five=n/5;n=n%5;
	one=n;
	printf("%d\n%d\n%d\n%d\n%d\n%d\n",hundred,fifty,twenty,ten,five,one);
	return 0;
}