int main ()
{
	int reverse(int a);
	int a;
	int i;
	for(i=1;i<=6;i++)
	{
		scanf("%d",&a);
		if(a==0)
			printf("0\n");
		if(a>0)
			printf("%d\n",reverse(a));
		if(a<0)
			printf("-%d\n",reverse(-a));
	}
	return 0;
}
int reverse(int a)
{
	int i;
	int j,k;
	int m=0;
	int c[100];
	c[0]=a;
	int b[100];
	for(i=0;;i++)
	{
		c[i+1]=c[i]/10;
		b[i]=c[i]-10*c[i+1];
		if(c[i+1]==0)
			break;
	}
	for(k=0;k<=i;k++)
		for(j=0;j<i-k;j++)
		{
			b[k]=b[k]*10;
		}
	for(j=0;j<=i;j++)
	{
		m=m+b[j];
	}
	return m;
}