
int main(int argc, char* argv[])
{
	int n,i,j,a[111],b[111];
	scanf ("%d",&n);
	j=n-1;
	for (i=0;i<n;i++)
	{
		scanf ("%d",&a[i]);
		b[j]=a[i];
		j--;
	}
	for (j=0;j<n-1;j++)
	printf("%d ",b[j]);
	printf("%d\n",b[n-1]);
	return 0;
}