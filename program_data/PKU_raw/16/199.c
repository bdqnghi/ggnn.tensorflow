void main()
{
	int a[5],i,j;
	for (i=0;i<5;i++)
	{
		a[i]=getchar();
	if (a[i]<48||a[i]>57)
		{
			j=i;
			break;
		}
	}
	for (i=j;i>=0;i--)
		putchar(a[i]);
}