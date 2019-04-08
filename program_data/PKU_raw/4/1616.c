void move1(int *p[],int m,int n)
{
	int i,k;
		for(i=0;i<m-1;i++)
		{
			for(k=0;k<=i;k++)
			{
				printf("%d\n",*(p[0+k]+i-k));
			}
		}
		for(i=m-1;i<n-1;i++)
		{
			for(k=0;k<m;k++)printf("%d\n",*(p[0+k]+i-k));
		}
		for(i=0;i<m;i++)
		{
			for(k=0;k<m-i;k++)
			{
				printf("%d\n",*(p[i+k]+n-1-k));
			}
		}
}
void move2(int *p[],int m,int n)
{
	int i,k;
		for(i=0;i<n-1;i++)
		{
			for(k=0;k<=i;k++)
			{
				printf("%d\n",*(p[0+k]+i-k));
			}
		}
		for(i=0;i<m-n;i++)
		{
			for(k=0;k<n;k++)printf("%d\n",*(p[i+k]+n-1-k));
		}
		for(i=m-n;i<m;i++)
		{
			for(k=0;k<m-i;k++)
			{
				printf("%d\n",*(p[i+k]+n-1-k));
			}
		}
}
void main()
{
	int m,n,i,j,*p[100]={0},**head;
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
	{	p[i]=(int *)malloc(n*sizeof(int));}
	head=p;
	for(i=0;i<m;i++)
	{for(j=0;j<n;j++)
	scanf("%d",*(p+i)+j);}	
	if(m<=n)move1(p,m,n);
	else move2(p,m,n);
}