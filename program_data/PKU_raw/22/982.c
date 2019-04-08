int main()
{
	static int a[300];
	int i,max=0,cmax=0;
	scanf("%d",&a[0]);
	for(i=1;getchar()==',';i++)
	{
		scanf("%d",&a[i]);
	}

	for(i=0;i<300;i++)
	{
		if(a[i]>max)
			max=a[i];
	}

	for(i=0;i<300;i++)
	{
		if((a[i]!=max)&&(a[i]>cmax))
			cmax=a[i];
	}
	if(cmax==0)
		printf("No\n");
		else
	printf("%d",cmax);
	return 0;
}