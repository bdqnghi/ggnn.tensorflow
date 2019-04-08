void main()
{ 
	int n,i=0,k=0,t=0;
	int a[90000]={0};
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);

	printf("%d",a[0]);

	for(k=1;k<n;k++)

	{	t=0;
		for(i=0;i<k;i++)
	{
			if(a[k]==a[i])
				t=1;
			
				}
	if(t==0)
	printf(" %d",a[k]);
	
	}
}