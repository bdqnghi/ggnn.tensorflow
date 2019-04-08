int main()
{
	int i,n,s=0,m=0;
	int  a[200],b[200];
	scanf ("%d\n",&n);
	for (i=0;i<n;i++)
	{
		scanf ("%d%d",&a[i],&b[i]);
	}
	for (i=0;i<n;i++)
	{
		if ((a[i]==0&&b[i]==1)||(a[i]==2&&b[i]==0)||(a[i]==1&&b[i]==2))
		{
			s++;
		}
		else if ((a[i]==1&&b[i]==0)||(a[i]==0&&b[i]==2)||(a[i]==2&&b[i]==1))
		{
			m++;
		}
		
	}
	if (s>m)
	{
		printf ("A");
	}
	else if (s<m)
	{
		printf ("B");
	}
	else 
	{
		printf ("Tie");
	}



	return 0;
}
