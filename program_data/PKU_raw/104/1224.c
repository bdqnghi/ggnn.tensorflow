int main()
{
	int x,y,i,a[1000]={0};
	scanf("%d %d",&x,&y);
	for(i=1,a[0]=x;;i++)
	{
		if(a[i-1]%2==0)
			a[i]=a[i-1]/2;
		else
			a[i]=(a[i-1]-1)/2;
		if(a[i]==1||a[0]==1)break;
	}
	for(;y>=1;)
	{
		for(i=0;a[i]>=1;i++)
		{
			if(y==a[i])
			{
				printf("%d",a[i]);
				break;
			}
		}
		if(y==a[i])break;
		else
			{
				if(y%2==0)
					y=y/2;
				else
					y=(y-1)/2;
			}
	}
	return 0;
}
