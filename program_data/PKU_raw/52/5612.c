int arrange(int a[],int q,int p)
{
	int i,j,b[100];
	for(i=0;i<q;i++)
		b[i]=a[p-q+i];
	for(i=p-q-1;i>=0;i--)
		a[i+q]=a[i];
	for(i=0;i<q;i++)
		a[i]=b[i];

	return 0;
}

int main()
{
	int n,m,i;
	int a[100];
	scanf("%d %d\n",&n,&m);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	arrange(a,m,n);
	printf("%d",a[0]);
	for(i=1;i<n;i++)
		printf(" %d",a[i]);

}