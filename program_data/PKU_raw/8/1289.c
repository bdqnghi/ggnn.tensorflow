int Compare(const void *elem1, const void *elem2)
{
    return *((int *)(elem1)) - *((int *)(elem2));
}
int main()
{
	int n1,n2;
	int*a1,*a2;
	int i1,i2,i3,i4;
	scanf("%d %d",&n1,&n2);
	a1=(int*)malloc(sizeof(int)*n1);
	a2=(int*)malloc(sizeof(int)*n2);
	for(i1=0;i1<n1;i1++)
	{
		scanf("%d",a1+i1);
	}
	for(i2=0;i2<n2;i2++)
	{
		scanf("%d",a2+i2);
	}
	qsort(a1,n1,sizeof(int),Compare);
	qsort(a2,n2,sizeof(int),Compare);
	for(i3=0;i3<n1;i3++)
	{
		printf("%d ",a1[i3]);
	}
	for(i4=0;i4<n2-1;i4++)
	{
		printf("%d ",a2[i4]);
	}
	printf("%d",a2[n2-1]);
}