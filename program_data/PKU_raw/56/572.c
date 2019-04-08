int main(int argc, char* argv[])
{
	int n,a[6],i,p;
	scanf ("%d",&n);
	for (i=1;i<=6;i++)
	{
		a[i]=n%10;
		n=n/10;
	    if (a[i]==0)
		{
			p=i;
		break;
		}
	}
    for (i=1;i<p;i++)
	{
		printf ("%d",a[i]);
	}
	return 0;
}

