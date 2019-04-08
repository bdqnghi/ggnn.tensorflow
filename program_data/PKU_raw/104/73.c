void main()
{
	int x,y,m,n,i,j,flag=0;
	double t;
	int a[10],b[10];
	scanf("%d%d",&x,&y);
	a[0]=x;
	b[0]=y;
	for(i=1;;i++)
	{
		t=pow(2,i);
		if(x/t<1)
		{
			m=(int)i;
			break;
		}
	}
	for(i=1;;i++)
	{
		t=pow(2,i);
		if(y/t<1)
		{
			n=(int)i;
			break;
		}
	}

	for(i=1;i<m;i++)
	{
		if(a[i-1]%2==0)
			a[i]=a[i-1]/2;
		else
			a[i]=(a[i-1]-1)/2;
	}
	for(i=1;i<n;i++)
	{
		if(b[i-1]%2==0)
			b[i]=b[i-1]/2;
		else
			b[i]=(b[i-1]-1)/2;
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]==b[j])
			{
				printf("%d",a[i]);
	            flag=1;
				break;
			}
		}
		if(flag==1)
			break;
	}	
}