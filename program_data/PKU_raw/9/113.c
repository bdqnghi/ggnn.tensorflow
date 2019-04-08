void main()
{
	int n,i,j,z,y;
	y=0;z=0;
	struct member
	{
		char xh[10];
		int ag;
	};
	struct member a[100];
	struct member b[101],c[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %d",a[i].xh,&a[i].ag);
	}
	for(i=0;i<n;i++)
	{
		if(a[i].ag>=60)
		{b[y]=a[i];
		y++;}
		else
		{c[z]=a[i];
		z++;
		}
	}
	
	for(i=1;i<y;i++)
	{
		for(j=0;j<y-i;j++)
		{
			if(b[j].ag<b[j+1].ag)
			{
				b[100]=b[j];
				b[j]=b[j+1];
				b[j+1]=b[100];
			}
		}
	}
	for(i=0;i<y;i++)
		printf("%s\n",b[i].xh);
	for(i=0;i<z;i++)
		printf("%s\n",c[i].xh);
}