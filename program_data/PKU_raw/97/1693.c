int main()
{
	int n,p=0,q=0,r=0;
	scanf("%d",&n);
	p=n/100;
	printf("%d\n",p);
	p=n%100;
	p=p/50;
	printf("%d\n",p);
	p=n%100%50;
	p=p/20;
	printf("%d\n",p);
	p=n%100%50%20;
	p=p/10;
	printf("%d\n",p);
	p=n%100%50%20%10;
	p=p/5;
	printf("%d\n",p);
	p=n%100%50%20%10%5;
	printf("%d",p);
	return 0;
}

