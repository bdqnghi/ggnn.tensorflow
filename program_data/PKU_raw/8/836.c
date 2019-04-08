
int main()
{
	int a[100],b[100];
	int n1,n2;
	void sca(int n,int a[]);
	void pai(int n,int a[]);
	void he(int n1,int n2,int a[],int b[]);
	void pri(int n1,int n2,int a[]);
	scanf("%d%d",&n1,&n2);
	sca(n1,a);
	sca(n2,b);
	pai(n1,a);
	pai(n2,b);
	he(n1,n2,a,b);
	pri(n1,n2,a);

	return 0;


}
void sca(int n,int a[])
{
	int i;

	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
}
void pai(int n,int a[])
{
	int temp,i,j,flag,min;
	for(i=0;i<n;i++)
	{
		min=a[i];
		flag=i;
		for(j=i;j<n;j++)
		{
			if(min>a[j])
			{
				min=a[j];
				flag=j;
			}
		}
		temp=a[i];
		a[i]=a[flag];
		a[flag]=temp;
	}
}
void he(int n1,int n2,int a[],int b[])
{
	int i;
	for(i=0;i<n2;i++)
		a[n1+i]=b[i];
}
void pri(int n1,int n2,int a[])
{
	int i;
	for(i=0;i<n1+n2-1;i++)
		printf("%d ",a[i]);
	printf("%d",a[n1+n2-1]);
}
		



