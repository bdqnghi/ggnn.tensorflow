void duqu(int m,int a[]);
void paixu(int m,int a[]);
void hebing(int m,int n,int a[],int b[]);
void shuchu(int m,int n,int a[]);
void main()
{
	int x[100]={0},y[100]={0},m,n;
	scanf("%d%d",&m,&n);
	duqu(m,x);
	duqu(n,y);
	paixu(m,x);
	paixu(n,y);
	hebing(m,n,x,y);
	shuchu(m,n,x);
}
void duqu(int m,int a[])
{
	int i;
	for(i=1;i<=m;i++)
		scanf("%d",&a[i]);
}
void paixu(int m,int a[])
{
    int i,j,k;
	for (i=1;i<=m;i++) 
       for (j=1;j<=m-i;j++) 
           if (a[j]>a[j+1]) 
		   {k=a[j];a[j]=a[j+1];a[j+1]=k;}
}
 void hebing(int m,int n,int a[],int b[])
{
	int i;
	for(i=m+1;i<=m+n;i++)
		a[i]=b[i-m];
}
void shuchu(int m,int n,int a[])
{
	int i;
	for(i=1;i<m+n;i++)
		printf("%d ",a[i]);
	printf("%d",a[m+n]);
}