int main()
{
	int i,j,k=1,l,m,n;
	char a[501];
	gets(a);
	l=strlen(a);
	for (m=1;m<l;m++)
	{
		for (i=0;i<l;i++)
		{
			j=i+m;
			if (a[i]==a[j])
			{
				for (k=m;k>0;k--)
				{
					if (a[i+k]!=a[j-k])
					{
						k=1;
						break;
					}
				}
				if (k==0)
				{
					n=i;
					for (;n<=j;n++)
						putchar(a[n]);
					printf ("\n");
				}
			}
		}
	}
	return 0;
}


