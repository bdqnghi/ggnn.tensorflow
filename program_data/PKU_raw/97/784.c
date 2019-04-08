int main()
{
	int n;
	scanf("%d",&n);
	int a=0;
	a=n%100;
	a=(n-a)/100;
	printf("%d\n",a);
	n=n-a*100;
	a=n%50;
	a=(n-a)/50;
	printf("%d\n",a);
	n=n-a*50;
	a=n%20;
	a=(n-a)/20;
	printf("%d\n",a);
	n=n-a*20;
	a=n%10;
	a=(n-a)/10;
	printf("%d\n",a);
	n=n-a*10;
	a=n%5;
	a=(n-a)/5;
	printf("%d\n",a);
	n=n-a*5;
	a=n%1;
	a=(n-a)/1;
	printf("%d",a);
	return 0;
}

