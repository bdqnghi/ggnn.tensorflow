void paixu(int a[],int n)
{
	int i,j,m;
	for(j=1;j<n;j++)
		for(i=0;i<n-j;i++)
                  if(a[i]>a[i+1])
		   {
		     m=a[i];
		     a[i]=a[i+1];
	       	     a[i+1]=m;
		   }
			

}
void shuchu1(int a[],int n)
{
	int i;
	for(i=0;i<n-1;i++)
		printf("%d ",a[i]);
    printf("%d",a[n-1]);
}
void shuchu2(int b[],int m)
{
	int i;
	for(i=0;i<m;i++)
		printf(" %d",b[i]);
}
void main()
{
	int a[10],n,b[10],m,i;
	scanf("%d %d",&n,&m);
         scanf("\n");
	for(i=0;i<n-1;i++)
		scanf("%d ",&a[i]);
          scanf("%d",&a[n-1]);
          scanf("\n");
	for(i=0;i<m-1;i++)
		scanf("%d ",&b[i]);
         scanf("%d",&b[m-1]);
	paixu(a,n);
	paixu(b,m);
	shuchu1(a,n);
	shuchu2(b,m);
}