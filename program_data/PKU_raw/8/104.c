int a[100]={0},b[100]={0};
int a_n,b_n,i;
void read()
{
	scanf("%d %d",&a_n,&b_n);
	for(i=0;i<a_n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<b_n;i++)
		scanf("%d",&b[i]);
}
void sort(int a[],int a_n,int b[],int b_n)
{
	int i,j,key;
	for(i=1;i<a_n;i++)
	{
		key=a[i];
		j=i-1;
		while(a[j]>key&&j>=0){a[j+1]=a[j];
		j--;}a[j+1]=key;
	}
		for(i=1;i<b_n;i++)
	{
		key=b[i];
		j=i-1;
		while(b[j]>key&&j>=0){b[j+1]=b[j];
		j--;}b[j+1]=key;
	}
}
void merge(int a[],int a_n,int b[],int b_n)
{
	int i;
	for(i=0;i<b_n;i++)
		a[a_n+i]=b[i];
}
void write()
{
	int i;
	for(i=0;i<a_n+b_n-1;i++)
	{
		printf("%d ",a[i]);
	}
	printf("%d",a[i]);
}
void main()
{
	read();
	sort(a,a_n,b,b_n);
	merge(a,a_n,b,b_n);
	write();
}
