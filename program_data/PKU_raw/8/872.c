void get(int m,int n);
void swap(int m,int n);
void put(int m,int n);
int a[1001],b[1001];
void main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	get(m,n);
	swap(m,n);
	put(m,n);
}
void get(int m,int n)
{
	int i;
	for(i=0;i<m;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		scanf("%d",&b[i]);
}
void swap(int m,int n)
{
	int j,k,c;
	for(j=0;j<m-1;j++)
		for(k=0;k<m-1-j;k++)
			if(a[k]>a[k+1]){
				c=a[k];
				a[k]=a[k+1];
				a[k+1]=c;
			}
	for(j=0;j<n-1;j++)
		for(k=0;k<n-1-j;k++)
			if(b[k]>b[k+1]){
				c=b[k];
				b[k]=b[k+1];
				b[k+1]=c;
			}
}
void put(int m,int n)
{
	int l;
	for(l=0;l<m;l++)
		printf("%d ",a[l]);
	for(l=0;l<n;l++){
		if(l==n-1)
			printf("%d",b[l]);
		else
			printf("%d ",b[l]);
	}
}