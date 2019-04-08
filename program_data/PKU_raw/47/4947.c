
void main()
{
	void change(int *a,int n);
	int i,n,a[100],*p=a;
	scanf("%d",&n);
	for(i=0;i<n;i++,p++)
		scanf("%d",p);
	printf("\n");
	p=a;
	change(p,n);
	for(p=a;p<a+n-1;p++)
		printf("%d ",*p);
	printf("%d",*p);
}

void change(int *a,int n)
{
	int *i,*p,*j,m,temp;
	m=(n-1)/2;
	p=a+m;
	i=a;
	j=i+n-1;
	for(;i<=p;i++,j--)
	{
		temp=*i;
		*i=*j;
		*j=temp;
	}

}