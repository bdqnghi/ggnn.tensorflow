void main()
{
	int k,m,n,*q,(*p)[100],h=0,i,j,l,t;
	p=(int (*)[100])malloc(100*100*sizeof(int));
	q=(int *)malloc(100*sizeof(int));
	scanf ("%d\n",&k);
	for (i=0;i<k;i++)
	{
		scanf ("%d %d",&m,&n);
		for (j=0;j<m;j++)
		{
			for (l=0;l<n;l++)
			{
				scanf ("%d",*(p+j)+l);
			}
		}
		for (t=0;t<n;t++)
		{
			*(q+i)=*(q+i)+*(*p+t)+*(*(p+m-1)+t);
		}
		for (t=0;t<m;t++)
		{
			*(q+i)=*(q+i)+**(p+t)+*(*(p+t)+n-1);
		}
		*(q+i)=*(q+i)-**p-*(*p+n-1)-*(*(p+m-1))-*(*(p+m-1)+n-1);
	}
	for (i=0;i<k;i++)
	{
		printf ("%d\n",*(q+i));
	}
}