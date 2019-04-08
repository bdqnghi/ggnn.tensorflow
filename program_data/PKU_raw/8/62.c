
void main()
{
	void reserve();
	reserve();
}

void reserve()
{
	void paixu(int a[],int k);
	int x,y;
	int i,j;
	int a[20],b[20];
	scanf("%d%d",&x,&y);
	for(i=0;i<x;i++)scanf("%d",&a[i]);
	for(i=0;i<y;i++)scanf("%d",&b[i]);

	paixu(a,x);
	paixu(b,y);
	
	for(j=0;j<y;j++)a[x+j]=b[j];
	for(j=0;j<x+y-1;j++)printf("%d ",a[j]);
	printf("%d\n",a[j]);
}

void paixu(int a[],int k)
{
	int i,j,temp;
	for(j=0;j<k;j++)
	{
		for(i=0;i<k-j-1;i++)
		{
			if(a[i]>a[i+1])
			{
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
		}
	}
}
