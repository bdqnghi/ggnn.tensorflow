int m,n;
static char a[100],b[100];
int i,j,temp;
void get()
{
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	scanf("%d",&b[i]);
}
void order()
{
	for(i=m-1;i>=0;i--)
	for(j=0;j<i;j++)
	if(a[j]>a[j+1])
	{
		temp=a[j];
		a[j]=a[j+1];
		a[j+1]=temp;
		}
	for(i=n-1;i>=0;i--)
	for(j=0;j<i;j++)
	if(b[j]>b[j+1])
	{
		temp=b[j];
		b[j]=b[j+1];
		b[j+1]=temp;
		}
}
void com()
{
	for(i=0;i<n;i++)
	a[m+i]=b[i];	
}
void print()
{
	printf("%d",a[0]);
	for(i=1;i<n+m;i++)
	printf(" %d",a[i]);
}
int main()
{
	get();
	order();
	com();
	print();
}