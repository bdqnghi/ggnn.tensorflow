int main()
{
	int m,n,temp=0;
	int a[1000],b[1000];
	int i,j;
	scanf("%d %d",&m,&n);
	a[0]=m;
	b[0]=n;
	for(i=1;;i++)
	{
		a[i]=a[i-1]/2;
		if(a[i]==1)	break;
	}
	for(i=1;;i++)
	{
		b[i]=b[i-1]/2;
		if(b[i]==1)	break;
	}
	for(i=0;i<1000;i++)
	{
		for(j=0;j<1000;j++)
			if(a[i]==b[j])
			{
				temp=1;
				break;
			}
		if(temp==1) break;
	}
	printf("%d",a[i]);
	return 0;
}