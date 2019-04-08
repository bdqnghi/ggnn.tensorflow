void main()
{
	char c,a[5],mid;
	int n=0,i;
	while ((c=getchar())!='\n')
	{
		a[n]=c;
		n++;
	}
	for (i=0;i<(n/2);i++)
	{
		mid=a[i];
		a[i]=a[n-1-i];
		a[n-1-i]=mid;
	}
	for (i=0;i<=n-1;i++) printf ("%c",a[i]);


}