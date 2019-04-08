int main()
{
	int a[1000];
	int b[1000];
	int x0,y0,x,y,i,n,j,flag;
	scanf("%d%d",&x,&y);
	i=0;
	a[0]=x;
	while(i>=0)
	{
		n=a[i]/2;
		if(n==0) break;
		i++;
		a[i]=n;
	}
	x0=i;
	i=0;
	b[0]=y;
	while(i>=0)
	{
		n=b[i]/2;
		if(n==0) break;
		i++;
		b[i]=n;
	}
	y0=i;
	flag=0;
	for(i=0;i<=x0;i++)
	{
		for(j=0;j<=y0;j++)
		{
			if(a[i]==b[j])
			{
				flag=1;
				break;
			}
		}
	if(flag==1) break;
	}
	printf("%d",a[i]);
	
	return 0;
}





