void order(int a[100],int l1);
void prin(int a[100],int l1,int b[100],int l2)
{
	int i;
	char c='\0';
	order(a,l1);
	order(b,l2);
	for(i=0;i<l1;i++)
		printf("%d ",a[i]);
	for(i=0;i<l2;i++)
	{
		if(i<l2-1)
			c=' ';
		else c='\n';
		printf("%d%c",b[i],c);
	}
}
void order(int a[100],int l1)
{
	int i,j,b;
	for(i=0;i<l1;i++)
	{
		for(j=i;j<l1;j++)
		{
			if(a[j]<a[i])
			{
				b=a[i];
				a[i]=a[j];
				a[j]=b;
			}
		}
	}
}
int main()
{
	int l1,l2,i;
	int a[100],b[100];
	scanf("%d%d",&l1,&l2);
	for(i=0;i<l1;i++)
		scanf("%d",&a[i]);
	for(i=0;i<l2;i++)
		scanf("%d",&b[i]);
	prin(a,l1,b,l2);
	return 0;
}