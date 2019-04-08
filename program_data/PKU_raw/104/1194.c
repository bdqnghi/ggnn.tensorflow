int main()
{
	int x,y,i,j,k,xi,count=0;
	scanf("%d%d",&x,&y);
	int a[11],b[11];
	a[0]=x;
	b[0]=y;
	if(x==1||y==1)
		xi=1;
	else
	{
	for(i=1;a[i-1]>1;i++)
	{
		a[i]=a[i-1]/2;
		b[i]=b[i-1]/2;
	}
	for(i=0;a[i]>=1;i++)
	{
		for(j=0;b[j]>=1;j++)
			if(a[i]==b[j])
			{
				xi=a[i];
				count+=1;
				break;
			}
			if(count!=0)break;
	}
	}
	printf("%d\n",xi);
	return 0;
}
	


	