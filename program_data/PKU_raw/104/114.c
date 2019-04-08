void main()
{
	int a[12]={0},b[12]={0};
	int x,i,j;
	x=0;
    scanf("%d %d",&a[0],&b[0]);
	for(i=0;i<11;i++)
	{
		a[i+1]=a[i]/2;
		b[i+1]=b[i]/2;
	}
	for(i=0;i<12;i++)
		for(j=0;j<12;j++)
		{
			if(a[i]==b[j])
			{
				printf("%d",a[i]);
				x=1;
				break;
			}
			if(x==1)break;
		}
}
