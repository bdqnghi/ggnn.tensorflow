void main()
{
	int x,i,j,a[5];
	scanf("%d",&x);
	i=0;
	while (x>=10)
	{
		a[i]=x%10;
		x=x/10;
		i=i+1;
	}
	a[i]=x;
	for (j=0;j<=i;j++) printf("%d",a[j]);
	printf("\n");

}