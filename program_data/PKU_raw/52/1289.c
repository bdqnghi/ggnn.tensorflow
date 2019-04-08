void main()
{
	int n,m,huan,i;

	int *p,*t;
	scanf("%d %d",&n,&m);
    if((t=(int *)malloc((2*n-m)*sizeof(int)))==NULL)
	{
		printf("No space avaible!");
		
	}
	for (p=t;p<t+n;p++)
	{
		scanf("%d",p);
	}
	for (i=0;i<n-m;i++)
	{
		
		t[n+i]=t[i];
	}
	for (p=t+n-m;p<t+(2*n-m-1);p++)
		printf("%d ",*p);
	printf("%d",*p);
}