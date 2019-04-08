
void scan(int n[],int a[],int b[])
{ 
	int i;
	scanf("%d%d",&n[0],&n[1]);

	for(i=0;i<n[0];i++)
	 scanf("%d",&a[i]);

	for(i=0;i<n[1];i++)
	 scanf("%d",&b[i]);
}



void sort(int a[],int b[], int m ,int n)
{
	int i,j,t;

	for(i=1;i<m;i++)
       for(j=0;j<m-i;j++)
		   if(a[j]>a[j+1])
		   {t=a[j];
		   a[j]=a[j+1];
		   a[j+1]=t;}

		   for(i=1;i<n;i++)
       for(j=0;j<n-i;j++)
		   if(b[j]>b[j+1])
		   {t=b[j];
		   b[j]=b[j+1];
		   b[j+1]=t;}
}

void com(int a[],int b[],int ab[],int m,int n)
{
	int i;

	for(i=0;i<m;i++)
		ab[i]=a[i];

	for(i=0;i<n;i++)
		ab[m+i]=b[i];
}

void prt(int ab[],int m,int n)
{
	int i;
	for(i=0;i<m+n-1;i++)
		printf("%d ",ab[i]);

	printf("%d",ab[m+n-1]);

}


int main()
{
	int a[101],b[101],n[2],ab[202];

		scan(n,a,b);
	sort(a,b,n[0],n[1]);
	com(a,b,ab,n[0],n[1]);
	prt(ab,n[0],n[1]);

	return 0;
}






