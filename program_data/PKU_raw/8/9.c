void input(int num[],int a[])
{
	int j;
    scanf("%d%d",&num[0],&num[1]);
	for(j=0;j<num[0]+num[1];j++)scanf("%d",&a[j]); 
}
void order(int num[],int a[])
{
	int j,k,temp;
	for(j=0;j<num[0];j++)
	{
		for(k=num[0]-1;k>0;k--)
		{
			if(a[k]<a[k-1])
			{
				temp=a[k];
				a[k]=a[k-1];
				a[k-1]=temp;
			}
		}
	}	
	for(j=num[0];j<num[0]+num[1];j++)
	{
		for(k=num[0]+num[1]-1;k>num[0];k--)
		{
			if(a[k]<a[k-1])
			{
				temp=a[k];
				a[k]=a[k-1];
				a[k-1]=temp;
			}
		}
	}
}
void print(int num[],int a[])
{
	int i;
	for(i=0;i<num[0]+num[1]-1;i++)
		printf("%d ",a[i]);
	printf("%d",a[num[0]+num[1]-1]);
}
void main()
{
	int a[40],num[2];
	input(num,a);
	order(num,a);
	print(num,a);
}