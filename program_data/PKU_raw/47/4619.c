
void reverse(int *p,int n)
{
	int temp,i,j;
	for(i=0,j=n-1;i<j;i++,j--)
	{
		temp=*(p+i);
		*(p+i)=*(p+j);
		*(p+j)=temp;
	}
}

void main()
{
	int n,i,*p;
	scanf("%d",&n);
	p=(int *)malloc(sizeof(int));
	for(i=0;i<n;i++)
		scanf("%d",p+i);
	reverse(p,n);
	for(i=0;i<n;i++)
	{
		printf("%d",*(p+i));
		if(i!=n-1)
			printf(" ");
		else
			printf("\n");
	}
}