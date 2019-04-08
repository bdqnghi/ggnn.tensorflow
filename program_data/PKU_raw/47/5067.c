int main()
{
    int a[100],b[100];
    int n,i,j;
    scanf("%d", &n);
    for (i=0; i<n; i++) 
	{
        scanf("%d", &a[i]);
    }
    for (i=0,j=n-1; i<n,j>=0; i++,j--) 
	{
       b[j]=a[i];
    }
    for (j=0; j<n-1; j++) 
	{
        printf("%d ", b[j]);
    }
	if(j=n-1)
	{
		printf("%d",b[j]);
	}
    return 0;
}