int f(int (*p)[100],int n)
{
	int sum,i,j,min=0;
	sum=0;
	{
		for (i=0;i<n;i++)
		{
			min=**(p+i);
			{
				for (j=1;j<n;j++)
				if(*(*(p+i)+j)<min)
				 min=*(*(p+i)+j);
				for(j=0;j<n;j++)
				*(*(p+i)+j)=*(*(p+i)+j)-min;
			}
		}
	}
	{
		for(j=0;j<n;j++)
		{
			min=*(*p+j);
			{
				{for(i=1;i<n;i++)
				if(*(*(p+i)+j)<min)
					min=*(*(p+i)+j);}
				for(i=0;i<n;i++)
					*(*(p+i)+j)=*(*(p+i)+j)-min;
				sum=*(*(p+1)+1);
			}
		}
		{for(i=1;i<n-1;i++)
			*(*p+i)=*(*p+i+1);}
		{for(i=1;i<n-1;i++)
			for(j=1;j<n-1;j++)
				*(*(p+i)+j)=*(*(p+i+1)+j+1);}
		{	for(i=1;i<n-1;i++)
			**(p+i)=**(p+i+1);}
			return(sum);
	}
}
void main()
{
	int (*p)[100],(*q)[100],n,i,j,sum=0,k;
	p=(int(*)[100])malloc(100*sizeof(int)*10000);
	scanf("%d",&n);
	for(k=0;k<n;k++)
	{
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				scanf("%d",*(p+k*n+i)+j);
	}
	for(k=0;k<n;k++)
	{
		sum=0;
		q=p+k*n;
		{
			for(i=n;i>1;i--)
			sum=sum+f(q,i);
		}
	   printf("%d\n",sum);
	}
}
