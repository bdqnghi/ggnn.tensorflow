int main()
{
	int a[10],b[10];
	int x,y,i,j,t;
	scanf("%d %d",&x,&y);
	if(x<y)
	{
        t=x;x=y;y=t;
	}
	for(i=0;i<10;i++)
	{
		a[i]=x;x/=2;
	}
	for(j=0;j<10;j++)
	{
		b[j]=y;y/=2;
	}
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			if(a[i]==b[j])
			{
				printf("%d\n",a[i]);
				return 0;
			}
		}
	}
	return 0;
}