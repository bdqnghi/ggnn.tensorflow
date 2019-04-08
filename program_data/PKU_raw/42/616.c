void main ()
{
	int n,a[100000],m,i,k=0;
	int *p,*q;
	scanf ("%d",&n);
	for (i=0;i<n;i++)
	scanf ("%d",&a[i]);
	scanf ("%d",&m);
	for (p=a;p<a+n-k;p++)
	{
		if (*p==m)
		{
			k++;
			for (q=p;q<a+n-k;q++)
			{
				*q=*(q+1);
			}
			p--;
		}
	}
         p=a;
	for (i=0;i<n-k-1;i++)
	{
		printf ("%d ",*(p+i));
	}
	printf ("%d",*(p+i));
}
