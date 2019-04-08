struct ans
{
	int x;
	int y;
};
int main()
{
	struct ans a[1000];
	int b[1000];
    int x1;
	int y1;
	int max=0,min=1000;
	char c;
	char c2[1000];
	int i=0,j,n=0,m;
	for(i=0;;i++)
	{
		scanf("%d",&x1);
		scanf("%c",&c);
		if(x1<min) min=x1;
		a[i].x=x1;
		n++;
		if(c!=',')
			break;
	}
	for(i=0;;i++)
	{
		scanf("%d",&x1);
		if(x1>max) max=x1;
		scanf("%c",&c);
		a[i].y=x1;
		if(c!=',')
			break;
	}
	for(i=min;i<=max;i++)
		b[i]=0;
	for(i=0;i<n;i++)
	{
		for(j=min;j<max;j++)
		{
			if(a[i].x<=j&&a[i].y>j) b[j]++;
		}
	}
	m=0;
	for(i=min;i<=max;i++)
	{
		if(m<b[i]) m=b[i];
	}
	printf("%d %d",n,m);
	return 0;
}