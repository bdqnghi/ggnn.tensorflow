void main()
{         void change(int x[],int y,int z);
	      int a[100],n,m,i;
		  scanf("%d %d",&n,&m);
		  for(i=0;i<n;i++)
			  scanf("%d",&a[i]);
			  change(a,n,m);
		  for(i=0;i<n-1;i++)
			  printf("%d ",a[i]);
		  printf("%d",a[n-1]);
}
void change(int x[],int y,int z)
{
	int *p,*h;
	h=x;
	for(p=h+y-1;p>=h;p--)
		*(p+z)=*p;
	for(p=h;p<=h+z-1;p++)
		*p=*(p+y);
}