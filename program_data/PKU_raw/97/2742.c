int main ()
{
	int n,a[6];
	scanf("%d",&n);
	a[0]=(n-n%100)/100;
	n=n-a[0]*100;
	a[1]=(n-n%50)/50;
	n=n-50*a[1];
	a[2]=(n-n%20)/20;
	n=n-20*a[2];
	a[3]=(n-n%10)/10;
	n=n-a[3]*10;
	a[4]=(n-n%5)/5;
	n=n-a[4]*5;
	a[5]=n;
	int i;
	for(i=0;i<6;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}

