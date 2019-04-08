int main()
{
	void move(int*,int,int);
	int n,i,m;
	int a[N];
	scanf("%d %d",&n,&m);
	for(i=1;i<=n;i++)
	scanf("%d",&a[i]);
	move(a,n,m);
	printf("%d",*(a+1));
	for(i=2;i<=n;i++)
	printf(" %d",*(a+i));
}
void move(int* a,int n,int m)
{
	int b[N],i;
	for(i=1;i<=n-m;i++)
	b[i+m]=a[i];
	for(i=n-m+1;i<=n;i++)
	b[i+m-n]=a[i];
	for(i=1;i<=n;i++)
	*(a+i)=*(b+i);
}