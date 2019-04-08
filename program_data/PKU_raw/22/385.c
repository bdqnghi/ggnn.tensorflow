int main()
{
	int i,j=0,max=0,next=0;
	int a[300]={0},b[300]={0};
	scanf("%d",&a[0]);
	for(i=1;i<300;i++)
		scanf(",%d",&a[i]);
	for(i=0;i<300;i++)
	{
		if(max<a[i])
			max=a[i];
	}
	for(i=0;i<300;i++)
	{
		if(a[i]!=max)
		{
			b[j]=a[i];
			j=j+1;
		}
	}
	for(j=0;j<300;j++)
	{
		if(next<b[j])
			next=b[j];
	}
	if(next!=0)
		printf("%d",next);
	else
		printf("No");
	return 0;
}
