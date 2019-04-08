void main()
{
	int r,c;
	int i,j,k;
	int (*p)[100];
	p=(int *)malloc(10000*sizeof(int));
	scanf("%d%d",&r,&c);
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			scanf("%d",*(p+i)+j);
	for(k=0;k<=r+c-2;k++)
	{
		for(i=0;i<=k;i++)
			if(i<r&&(k-i)<c)
				printf("%d\n",*(*(p+i)+k-i));
	}
}

