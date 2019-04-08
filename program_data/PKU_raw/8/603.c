int array_a[100],array_b[100],n_a,n_b;
void input()
{
    int i;

	scanf("%d%d",&n_a,&n_b);
	for(i=0;i<n_a;i++)
		scanf("%d",&array_a[i]);
	for(i=0;i<n_b;i++)
		scanf("%d",&array_b[i]);
}
void order()
{
	int i,j,temp;

	for(i=1;i<n_a;i++)
		for(j=1;j<n_a+1-i;j++)
			if(array_a[j]<array_a[j-1])
			{
				temp=array_a[j];
				array_a[j]=array_a[j-1];
				array_a[j-1]=temp;
			}
	for(i=1;i<n_b;i++)
		for(j=1;j<n_b-i+1;j++)
			if(array_b[j]<array_b[j-1])
			{
				temp=array_b[j];
				array_b[j]=array_b[j-1];
				array_b[j-1]=temp;
			}
}
void catenate()
{
	int i;
	for(i=0;i<n_b;i++)
		array_a[n_a+i]=array_b[i];
}
void print()
{
	int i;
	for(i=0;i<n_a+n_b;i++)
		printf("%d%c",array_a[i],(i==n_a+n_b-1)?'\n':' ');
}
int main()
{
	input();
	order();
	catenate();
	print();
	return 0;
}