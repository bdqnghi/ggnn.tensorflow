int main()
{
  void pre(int *,int);
  void bubble_sort(int*,int);
  void merge(int*,int,int*,int,int*);
  void print(int*,int);
  int a[1000],b[1000],c[1000],A,B;
  scanf("%d %d",&A,&B);
  pre(a,A);bubble_sort(a,A);
  pre(b,B);bubble_sort(b,B);
  merge(a,A,b,B,c);
  print(c,A+B);
}
void pre(int*a,int A)
{
	int i;
	for(i=0;i<A;i++)
	scanf("%d",a+i);
}
void bubble_sort(int* a,int A)
{
	int i,j,temp;
	for(j=A-1;j>0;j--)
	{
		for(i=0;i<j;i++)
		if(a[i]>a[i+1])
		{
			temp=a[i];
			a[i]=a[i+1];
			a[i+1]=temp;
		}
	}
}
void merge(int* a,int A,int* b,int B,int* c)
{
	int i;
	for(i=0;i<A;i++)
	  c[i]=a[i];
	for(i=0;i<B;i++)
	  c[i+A]=b[i];
}
void print(int* c,int C)
{
	int i;
	printf("%d",c[0]);
	for(i=1;i<C;i++)
	printf(" %d",c[i]);
}