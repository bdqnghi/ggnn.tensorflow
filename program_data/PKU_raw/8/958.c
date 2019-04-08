int n,m;
void f1(int a[1000],int b[1000])
{
	int i;
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<m;i++)
		scanf("%d",&b[i]);
}
void f2(int a[1000],int b[1000])
{
	int i,j,t;
	for(j=0;j<(n-1);j++)
	{for(i=(n-1);i>j;i--)
	{if(a[i]<a[i-1])
	{t=a[i];
	a[i]=a[i-1];
	a[i-1]=t;}}}
	for(j=0;j<(n-1);j++)
	{for(i=(m-1);i>j;i--)
	{if(b[i]<b[i-1])
	{t=b[i];
	b[i]=b[i-1];
	b[i-1]=t;}}}
}
void f3(int a[1000],int b[1000])
{
	int i;
	for(i=0;i<m;i++)
		a[n+i]=b[i];
}
void f4(int a[1000])
{
	int i;
	for(i=0;i<(n+m);i++)
	{printf("%d",a[i]);
	if(i!=(n+m-1)) printf(" ");}
}
int main()
{
	int a[1000],b[1000];
	scanf("%d %d",&n,&m);
	f1(a,b);
	f2(a,b);
	f3(a,b);
	f4(a);
}
