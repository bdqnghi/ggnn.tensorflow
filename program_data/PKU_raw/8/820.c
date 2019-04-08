int a[100],b[100],c[100];int m,n,i,j,k,xx;
void sort(int a[],int n)
{
	int i,j,t;
	for (i=1;i<=n-1;i++) 
		for (j=1;j<=n-i;j++)
			if (a[j]>a[j+1]) {t=a[j];a[j]=a[j+1];a[j+1]=t;}
}
void merge(int a[],int b[],int m,int n)
{
	int i;
	for (i=1;i<=n;i++) a[m+i]=b[i];
}

void init(int a[],int b[])
{    //freopen("tt.in","r",stdin);
     scanf("%d%d",&m,&n);
	 for (i=1;i<=m;i++) 
		 
			 scanf("%d",&a[i]);
	 for (i=1;i<=n;i++) 
		 
			 scanf("%d",&b[i]);
			 
	 }

void output(int a[],int k)
{
 int i;
	//freopen("tt.out","w",stdout);
	for(i=1;i<=k;i++) if (i==1) printf("%d",a[i]); else printf(" %d",a[i]);
}
int main()
{
init(a,b);
sort(a,m);
sort(b,n);
merge(a,b,m,n);
output(a,m+n);
	 
return 0;
}