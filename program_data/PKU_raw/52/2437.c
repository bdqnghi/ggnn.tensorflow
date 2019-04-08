
void move(int *p,int n)
{	
	int i,temp;
	temp=*(p+n-1);
	for(i=n-2;i>=0;i--)
		*(p+i+1)=*(p+i);
	*p=temp;
}

void main()
{
	int i,n,m,*p;
	scanf("%d%d",&n,&m);
	p=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
		scanf("%d",p+i);
	for(i=0;i<m;i++)
		move(p,n);
	for(i=0;i<n;i++)
	{
		printf("%d",*(p+i));
		if(i!=n-1)
			printf(" ");
		else
			printf("\n");
	}
}

