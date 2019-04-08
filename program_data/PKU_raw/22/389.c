void main()
{
    int max(int x,int y);
	int a[100];
	int m=0,x=0,j,i=1;
	scanf("%d",&a[1]);
	while(getchar()==',')
	{
		i++;
        scanf("%d",&a[i]);
	}
    if(i!=1)
	{
		for(j=1;j<=i;j++)
			m=max(m,a[j]);
		for(j=1;j<=i;j++)
		{
			if(a[j]==m)
				a[j]=0;
		}
		for(j=1;j<=i;j++)
			x=max(x,a[j]);
		if(x!=0)
			printf("%d\n",x);
		else
			printf("No\n");
	}
	else printf("No\n");
}
int max(int x,int y)
{
	int z;
    if(x>y)z=x;
	else z=y;
	return z;
}