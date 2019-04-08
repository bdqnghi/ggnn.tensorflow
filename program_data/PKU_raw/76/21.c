int main()
{
	int a[100][2];
	int n;
	int x,y,d=0,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %d",&a[i][0],&a[i][1]);
	}
	x=a[1][0];
	y=a[1][1];
	for(i=0;i<n;i++)
	{
		if(a[i][0]<x)
		{
			x=a[i][0];
		}
		if(a[i][1]>y)
		{
			y=a[i][1];
		}
	}
	for(i=0;i<n;i++)
	{
		d=0;
		if(a[i][0]!=x)
		{
			for(j=0;j<n;j++)
			{
				if(((a[j][1]>a[i][0])||(a[j][1]==a[i][0]))&&(j!=i)&&((a[j][0]<a[i][0])||(a[j][0]==a[i][0])))
				{
					d=1;
					break;
				}
			}
		}
		if(a[i][0]==x)
			{
				d=1;

		}
		if(d==0)
			break;
	}
	if(d==1)
	{
		for(i=0;i<n;i++)
		{
			d=1;
			if(a[i][1]!=y)
			{
				for(j=0;j<n;j++)
				{
					if(((a[j][0]<a[i][1])||(a[j][0]==a[i][1]))&&(j!=i)&&((a[j][1]>a[i][1])||(a[j][1]==a[i][1])))
					{
						d=2;
						break;
					}
				}
			}
			if(a[i][1]==y)
			{
				d=2;
			}
			if(d==1)
				break;
		}
	}
	if(d==2)
	{
		printf("%d %d",x,y);
	}
	if(d!=2)
	{
		printf("no");
	}
	return 0;
}




