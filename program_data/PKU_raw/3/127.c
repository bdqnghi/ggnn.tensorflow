int main ()
{
	int n,k,i,a[10000],b[10000],j;
	scanf ("%d %d",&n,&k);
	for (i=0;i<n;i++)
	{
		scanf ("%d",&a[i]);
	}
	for (i=0;i<n-1;i++)
	{
		for (j=1;j<n;j++)
		{
			b[i]=a[i]+a[j];
			if (b[i]==k)
			{
				break;
			}
			else
			{
				continue;
			}
		}
		if (b[i]==k)
		{
			break;
		}
		else
		{
			continue;
		}
	}
	if (b[i]==k)
	{
		printf ("yes");
	}
	else
	{
		printf ("no");
	}
	return 0;
}
