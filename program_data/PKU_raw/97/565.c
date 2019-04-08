void main()
{
	int n;
	int a[6]={100,50,20,10,5,1};
	int b[6];
	int i;
	scanf("%d",&n);
	for(i=0;i<6;i++)
	{
		if(n<a[i])
			printf("0\n");
		if(n>=a[i])
		{
			b[i]=n/a[i];
			n=n-b[i]*a[i];
			printf("%d\n",b[i]);
		}
	}
}
