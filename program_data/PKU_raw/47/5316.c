int main(int argc, char* argv[])
{
	int n,a[100],i,j,m=0;
	scanf ("%d",&n);
    for (i=0;i<=n-1;i++)
	{
		scanf ("%d",&a[i]);
		m++;
	}
	for (j=m-1;j>0;j--)
		printf ("%d ",a[j]);
         printf ("%d",a[0]);
	return 0;
}