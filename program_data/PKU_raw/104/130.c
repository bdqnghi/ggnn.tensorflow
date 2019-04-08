void main()
{
	int x,y,a[10]={0},b[10]={0},i,j;
	scanf("%d%d",&x,&y);
	a[0]=x;
	b[0]=y;
	for(i=1;;i++)
	{
		a[i]=a[i-1]/2;
		if(a[i]==1)
			break;
	}
	for(j=1;;j++)
	{
		b[j]=b[j-1]/2;
		if(b[j]==1)
		    break;
	}
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			if(a[i]==b[j])
			{
				printf("%d",a[i]);
				break;
			}
			else if(b[j]==1)
				break;
		}
		if(a[i]==b[j])
		{
			break;
		}
		else continue;
	}
}