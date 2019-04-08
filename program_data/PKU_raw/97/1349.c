int main()
{
	int n;
	scanf("%d",&n);

	int l;
	int r;
	l=n%100;
	r=(n-l)/100;
	printf("%d\n",r);
	n=l;
	l=n%50;
	r=(n-l)/50;
	printf("%d\n",r);
	n=l;
	l=n%20;
	r=(n-l)/20;
	printf("%d\n",r);
	n=l;
	l=n%10;
	r=(n-l)/10;
	printf("%d\n",r);
	n=l;
	l=n%5;
	r=(n-l)/5;
	printf("%d\n",r);
	n=l;
	l=n%1;
	r=(n-l)/1;
	printf("%d",r);





	
	return 0;
}