
int main()
{
	int a,b;
	scanf ("%d",&a);
	b=a/100;
	a=a-b*100;
	printf ("%d\n",b);
	b=a/50;
	a=a-b*50;
	printf ("%d\n",b);
	b=a/20;
	a=a-b*20;
	printf ("%d\n",b);
    b=a/10;
	a=a-b*10;
	printf ("%d\n",b);
    b=a/5;
	a=a-b*5;
	printf ("%d\n",b);
	printf ("%d\n",a);
	return 0;
}