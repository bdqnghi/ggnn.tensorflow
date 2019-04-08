void main()
{
	int x,i=0,j=0,m=1,n=1,y,t=1,a[10]={0},b[10]={0};
	scanf("%d%d",&x,&y);
	a[0]=x;b[0]=y;
	while(a[i]!=1)
	{
		if(a[i]%2==0)
		a[i+1]=a[i]/2;
		else 
		a[i+1]=(a[i]-1)/2;
		i++;m++;
	}
    while(b[j]!=1)
	{
		if(b[j]%2==0)
		b[j+1]=b[j]/2;
		else 
		b[j+1]=(b[j]-1)/2;
		j++;n++;
	}
	if(m>=n)
	{
		for(j=0;j<n;j++)
		{
			for(i=0;i<m;i++)
				if(a[i]==b[j])
				{
					printf("%d\n",a[i]);t=0;
					break;
				}
				if(t==0)
					break;
		}
	}
	else 
		for(i=0;i<m;i++)
		{ 
			for(j=0;j<n;j++)
				if(b[j]==a[i])
				{
					printf("%d\n",b[j]);t=0;
					break;
				}
				if(t==0)
					break;
		}
}

				





