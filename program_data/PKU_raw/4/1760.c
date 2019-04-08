void main()
{
	int *p,row,col,*q,i,k;
	scanf("%d%d",&row,&col);
	p=(int *)malloc(row*col*sizeof(int));
	for(q=p;q<p+row*col;q++)
		scanf("%d",q);
	for(k=0;k<row+col-1;k++)
	{
		if(k<col)
		{
			for(i=0;i<=k&&i<row;i++)
				printf("%d\n",*(p+i*col+k-i));
		}
		else
		{
			for(i=k-col+1;i<row&&i<=k;i++)
				printf("%d\n",*(p+i*col+k-i));
		}
	}
}