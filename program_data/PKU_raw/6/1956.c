void main()
{
	int i, n, r, s, a[100][100], j, k=1, sum;
	scanf("%d",&n);
	while(k<=n)
	{
		scanf("%d %d",&r,&s);
		sum=0;
		for(i=0; i<r; i++)
		{
			for(j=0; j<s; j++)
				scanf("%d",*(a+i)+j);
		}
		if(r==1)
		{
			for(i=0; i<s; i++)
				sum += *(*(a+0)+i);
		}
		else if(s==1)
		{
			for(i=0; i<r; i++)
				sum += *(*(a+i)+0);
		}
		else
		{
			for(i=0, j=0; j<s-1; j++)
				sum += *(*(a+i)+j);
			for(i=0, j=s-1; i<r-1; i++)
				sum += *(*(a+i)+j);
			for(i=r-1 ; j>0; j--)
				sum += *(*(a+i)+j);
			for(j=0; i>0; i--)
				sum += *(*(a+i)+j);
		}
		printf("%d\n",sum);
		k++;
	}
}