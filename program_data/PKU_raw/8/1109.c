int A,B;
int *a,*b;
int c[500];
void putin()
{
	int i;
	scanf("%d %d",&A,&B);
	a=(int*)malloc(A*sizeof(int));
	b=(int*)malloc(B*sizeof(int));
	for(i=0;i<A;i++)
	scanf("%d",&a[i]);
	for(i=0;i<B;i++)
	scanf("%d",&b[i]);
}
void replace()
{
	int i,j,z;
	for(i=0;i<A-1;i++)
	  for(j=0;j<A-i-1;j++)
	  if(a[j]>a[j+1])
	  {z=a[j];a[j]=a[j+1];a[j+1]=z;}
	for(i=0;i<B-1;i++)
	  for(j=0;j<B-i-1;j++)
	  if(b[j]>b[j+1])
	  {z=b[j];b[j]=b[j+1];b[j+1]=z;}
}
void combine()
{
	int i;
	for(i=0;i<A;i++)
	c[i]=a[i];
	for(i=A;i<A+B;i++)
	c[i]=b[i-A];
}
void print()
{
	int i;
	for(i=0;i<A+B;i++)
	{
		if(i==0)
		printf("%d",c[i]);
		else
		printf(" %d",c[i]);
		}
	
}
main()
{
	putin();
	replace();
	combine();
	print();
	}
