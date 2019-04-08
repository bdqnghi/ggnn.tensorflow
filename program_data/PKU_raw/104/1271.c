int main()
{
	int x,y,i,j,sign=0;
	int a[1000]={0},b[1000]={0};
	scanf("%d%d",&x,&y);

	if(x<y)
	{	a[0]=x;b[0]=y;}
	else
	{	a[0]=y;b[0]=x;}

	for(i=1;;i++)
	{
		a[i]=a[i-1]/2;
		if(a[i]==0)
			break;
	}

	for(i=1;;i++)
	{
		b[i]=b[i-1]/2;
		if(b[i]==0)
			break;
	}

	for(i=0;a[i]!=0;i++)
	{
		for(j=0;b[j]!=0;j++)
		{
			if(a[i]==b[j])
			{
				printf("%d\n",a[i]);
				sign=1;
				break;
			}
		}
		if(sign==1)
			break;
	}
	return 0;
}





	
