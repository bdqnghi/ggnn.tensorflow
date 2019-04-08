void main()
{
	int a[100]={0},b[100]={0},c[10];
	int i,j,x=0,y=0,k=0;
	scanf("%d %d",&a[0],&b[0]);
	for(i=0;i<100;i++)
	{
		if(a[i]>=2)
		{
			a[i+1]=a[i]/2;
			x++;
		}
	}
	for(j=0;j<100;j++)
	{
		if(b[j]>=2)
		{
			b[j+1]=b[j]/2;
			y++;
		}
	}
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
			if(a[i]==b[j]&&a[i]!=0&&b[j]!=0)
			{c[k]=a[i];
			k++;
				
				
			}
	}
	printf("%d",c[0]);
}