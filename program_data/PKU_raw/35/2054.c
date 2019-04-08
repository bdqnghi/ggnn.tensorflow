int main()
{
	int a[8][8],i,j,h,l,q,w,sum=0;
	scanf("%d,%d",&h,&l);
	for(i=0;i<h;i++)
	{
		for(j=0;j<l;j++)
			scanf("%d",&a[i][j]);
	}
	for(i=0;i<h;i++)
	{
		q=0;
		w=0;
		for(j=0;j<l;j++)
			if(a[i][q]<a[i][j]) q=j;
		for(j=0;j<h;j++)
			if(a[j][q]<a[w][q]) w=j;
		if(w==i)
		{	
			printf("%d+%d\n",w,q);
			sum++;
		}
	}
	if(sum==0)
		printf("No");
	return 0;
}