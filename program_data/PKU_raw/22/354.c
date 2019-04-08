void main()
{
    int i,j,x,y,a[301],k;
	scanf("%d",&a[0]);
	for(i=1;getchar()!='\n';i++)
		scanf("%d",&a[i]);
	k=i;
	for(j=0;1;j++)
		if(a[j]!=a[j+1])
			break;
	if(i==1||j+1==i)
		printf("No");
	else
	{
		x=a[0];
		y=0;
		for(i=1;i<k;i++)
			if(x<a[i])
				x=a[i];
		for(i=0;i<k;i++)
			if(y<a[i]&&a[i]!=x)
				y=a[i];
		printf("%d",y);
		//printf("\n%d",x);
	}
}