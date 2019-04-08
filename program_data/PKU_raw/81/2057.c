void main()
{
	int m,n,i,j,c,a[5][5],temp;
	int compare(int n,int m);
	int (*p)[5];
	p=a;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			scanf("%d",&a[i][j]);
	scanf("%d%d",&n,&m);
	c=compare(n,m);
	if(c)
	{
		for(j=0;j<5;j++)
		{
			temp=*(*(p+n)+j);
			*(*(p+n)+j)=*(*(p+m)+j);
			*(*(p+m)+j)=temp;
		}
		p=a;
		for(i=0;i<5;i++)
		{
			for(j=0;j<4;j++)
				printf("%d ",*(*(p+i)+j));
			printf("%d\n",*(*(p+i)+j));
		}
	}
	else printf("error");
}
int compare(int n,int m)
{
	int c;
	if(n<5&&m<5)
		c=1;
	else c=0;
	return(c);
}





