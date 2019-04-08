int main()
{
	int a[300],k=0,i,max=-999,max1=-999;
	char c;
	scanf("%d",&a[k]);
	scanf("%c",&c);
	while(c!='\n')
	{
		k++;
		scanf("%d",&a[k]);
		scanf("%c",&c);
	}
	for(i=0;i<=k;i++)
	{
		if(a[i]>max)
			max=a[i];
	}
	for(i=0;i<=k;i++)
	{
		if(a[i]>max1&&a[i]<max)
		{
			max1=a[i];
		}
	}
		if(max1==-999)
			printf("No");
		else
			printf("%d",max1);
		return 0;
}
