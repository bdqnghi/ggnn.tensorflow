void main()
{
	void inv(int x[],int b);
	int n;
	scanf("%d",&n);
    int i,a[100];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	inv(a,n);
	for(i=0;i<n-1;i++)
	{	printf("%d ",a[i]); }
	printf("%d",a[n-1]);
}
void inv(int x[],int b)
{
	int temp,i,j,m=b/2;
	for(i=0;i<m;i++)
	{
		j=b-1-i;
		temp=x[i];x[i]=x[j];x[j]=temp;
	}
	return;
}