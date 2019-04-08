void main()
{
	 int f(int x[],int  X,int y[],int  Y);
 void arr(int  k[],int   K);
	int i,m,n,k;
	int a[1000],b[1000] ;
	scanf("%d %d",&m,&n);
	for (i=0;i<m;i++)
		scanf("%d",&a[i]);
	for (i=0;i<n;i++)
		scanf("%d",&b[i]);
f(a,m,b,n);
k=0;
 for (i=0;i<m+n;i++)
{
	 printf("%d",a[i]);
k++;
if (k<m+n)
printf(" ");
}
}
 int f(int x[],int  X,int y[],int  Y)
{
int j;
	arr(x,X);
	arr(y,Y);
 
	for (j= X;j<X+Y;j++)
		x[j]=y[j-X];
 
}
 void arr(int k[],int  K) 
 {
	 int i,j,t,d;
	 for (i=0;i< K-1;i++)
	 {
		 d=i;
		 for (j=i+1;j< K;j++)
			 if (k[j]<k[d])
				 d=j;
			 t=k[d];
			 k[d]=k[i];
			 k[i]=t;
	 }
 }


