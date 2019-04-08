
int main()
{
	int a[50000],b[50000],n,i,j;
	scanf("%d",&n);
	for (i=0;i<n;i++)
		 scanf("%d%d",&a[i],&b[i]);
	for (i=0;i<n;i++)
		 for (j=0;j<n-i-1;j++)
			 if (a[j]>a[j+1]) {int x=a[j];a[j]=a[j+1];a[j+1]=x;x=b[j];b[j]=b[j+1];b[j+1]=x;}
	int sign=1;
	for (i=1;i<n;i++)
	{
		if (a[i]>b[i-1]) {sign=0;break;}
		if (b[i-1]>b[i]) b[i]=b[i-1];
	}
	if (sign==0) printf("no\n");
	else printf("%d %d\n",a[0],b[n-1]);
	return 0;
}