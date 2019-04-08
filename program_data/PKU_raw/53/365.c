void main()
{
	int i,j,b,a[100];
	scanf("%d",&b);
	for(i=0;i<b;i++)
		scanf("%d",&a[i]);
	printf("%d",a[0]);
	for(i=1;i<b;i++)
	{
		for(j=0;j<i;j++)
			if(a[i]==a[j]) break;
		if(j==i) printf(",%d",a[i]);
	}
}
