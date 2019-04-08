int s(int m);
int p(int m,int i,int a[100]);
void e(int i,int c[100],int d[100],int m,int n);
int main()
{
	int i,m,n,a[100],b[100],c[100],d[100];
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++) a[i]=s(i);
	for(i=0;i<n;i++) b[i]=s(i);
	for(i=0;i<m;i++) c[i]=p(m,i,a);
	for(i=0;i<n;i++) d[i]=p(n,i,b);
	for(i=0;i<m+n;i++) e(i,c,d,m,n);
	return 0;
}
int s(int m)
{
	int a[100];
	scanf("%d",&a[m]);
	return a[m];
}
int p(int m,int i,int a[100])
{
	int p,q,n;
	for(p=0;p<m;p++)
	{
		for(q=0;q<m-1;q++)
		{
			if(a[q]>a[q+1])
			{
				n=a[q];
				a[q]=a[q+1];
				a[q+1]=n;
			}
		}
	}
	return a[i];
}
void e(int i,int c[100],int d[100],int m,int n)
{
	if(i==0) printf("%d",c[0]);
	if(i>0&&i<m) printf(" %d",c[i]);
	if(i>=m) printf(" %d",d[i-m]);
}