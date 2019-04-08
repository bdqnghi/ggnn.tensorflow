int m,n;
int a[100];
void insert(void)
{
	int i=0;
	scanf("%d%d",&m,&n);
	
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n");
	for(i=m;i<m+n;i++)
	{
		scanf("%d",&a[i]);
	}
}
void px(int *p)
{
	int i,j,b=0;
	for(i=0;i<m;i++)
	{
		for(j=m-1;j>i;j--)
		{
			if(*(p+j)<*(p+j-1))
			{
				b=*(p+j);
				*(p+j)=*(p+j-1);
				*(p+j-1)=b;
			}
		}
	}
	for(i=m;i<m+n;i++)
	{
		for(j=m+n-1;j>i;j--)
		{
		if(*(p+j)<*(p+j-1))
			{
				b=*(p+j);
				*(p+j)=*(p+j-1);
				*(p+j-1)=b;
			}
		}
	}
	printf("%d",*(p+0));
	for(i=1;i<m+n;i++)
	{
	  printf(" %d",*(p+i));
	}
}
void main()
{
	insert();
	px(a);
}
