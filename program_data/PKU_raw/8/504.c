void f0(int a[],int x)
{
	int i=0;
    for(;i<x;i++)
	scanf("%d",&a[i]);
}
void f1(int a[],int x)
{   int i,j,s;
	for(i=0;i<x-1;i++)
	for(j=0;j<x-1-i;j++)
		if(a[j]>a[j+1]) {s=a[j];a[j]=a[j+1];a[j+1]=s;}
}
void f2(int a[],int b[],int c[],int m,int n)
{
	int i=0;
	while(i<m)
	{c[i]=a[i];i++;}
	while(i<m+n)
	{c[i]=b[i-m];i++;}
}
main()
{
	int a[50],b[50],c[100],m,n,i;
	scanf("%d %d",&m,&n);
	f0(a,m);
	f0(b,n);
	f1(a,m);
	f1(b,n);
	f2(a,b,c,m,n);
	printf("%d",c[0]);
	for(i=1;i<n+m;i++)
     printf(" %d",c[i]);
	return 0;
	
}
