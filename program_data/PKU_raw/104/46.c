void main()
{
	int n,m,x,y,i,j,z=0;
	int a[100],b[100];
	scanf("%d %d",&n,&m);
	a[0]=n;
	for(i=0;a[i]!=1;)
	{
		i++;
		a[i]=(int)(a[i-1]/2);
	}
	x=i;
    b[0]=m;
	for(i=0;b[i]!=1;)
	{
		i++;
		b[i]=(int)(b[i-1]/2);
	}
	y=i;
	for(i=0;i<=x;i++)
	{
		for(j=0;j<=y;j++)
		{
			if(a[i]==b[j])
			{
				z=1;
				goto loop;
			}
		}
	}
loop:if(z==1)
	 {
		 printf("%d\n",a[i]);
	 }
}
