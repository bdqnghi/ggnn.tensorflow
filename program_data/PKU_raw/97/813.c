int main()
{
	int n, i, a[6];
	scanf("%d", &n);
	if(n<1000&&n>0)
	{
		a[0]=n/100;
		a[1]=n%100/50;
		a[2]=n%50/20;
		a[3]=n%50%20/10;
		a[4]=n%10/5;
		a[5]=n%5;
	         for(i=0;i<6;i++)
		{
			printf("%d\n", a[i]);
		}
	}
	return 0;
}