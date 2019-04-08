void move(int a[],int n,int m)
{
	int last,*p;
	last=*(a+n-1);
	for(p=a+n-1;p>a;p--)
	*p=*(p-1);
	*p=last;
	m--;
	if(m>0) move(a,n,m);
}
void main()
{
	int i,a[100],*p=a,n,m;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	move(a,n,m);
	for(i=0;i<n-1;i++)
	printf("%d ",a[i]);
	printf("%d\n",a[i]);
}
	
