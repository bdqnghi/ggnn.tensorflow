void main()
{
	int x,y;
	int a[5],i;
	int w=0;
	scanf("%d",&x);
	for(i=4;i>=0;i--)
	{
		a[i]=x%10;
		x=x/10;
	}
	for(i=0;a[i]==0;i++)
		w++;
	for(i=4;i>=w;i--)
		printf("%d",a[i]);
	printf("\n");
}
