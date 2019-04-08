void main()
{
	int x,y,i,j,t;
	int a[100],b[100];
	scanf("%d%d",&x,&y);
	for(i=0;i<x;i++)
		scanf("%d",&a[i]);
	for(i=0;i<y;i++)
		scanf("%d",&b[i]);
	for(j=0;j<=x-1;j++)
		for(i=0;i<x-j-1;i++)
		if(a[i]>a[i+1])
		{	t=a[i];a[i]=a[i+1];a[i+1]=t;}
    for(j=0;j<=y-1;j++)
		for(i=0;i<y-j-1;i++)
		if(b[i]>b[i+1])
		{	t=b[i];b[i]=b[i+1];b[i+1]=t;}	
		for(i=0;i<x;i++)
				printf("%d ",a[i]);
            for(i=0;i<y-1;i++)
			{	printf("%d ",b[i]);}
			printf("%d",b[y-1]);
}