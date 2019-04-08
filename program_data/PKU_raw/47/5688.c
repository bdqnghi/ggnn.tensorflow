int main(int argc, char* argv[])
{
	int n,i,a[N];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	i--;
	printf("%d",a[i]);
	i--;
	for(;i>=0;i--)
 	    printf(" %d",a[i]);
	return 0;
}