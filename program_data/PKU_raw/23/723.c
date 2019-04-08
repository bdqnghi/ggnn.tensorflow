void main()
{
	char a[100],b[100][100];
	int i,j=0,k=0,l,p=0;
	gets (a);
	l=strlen (a);
	for (i=0;i<l;i++)
	{
		if (a[i]!=32) 
		{
			if (p==0) 
			{
				b[j][k]=0;
			    j=j+1;
				k=0;
			}
			b[j][k]=a[i];
			k++;
			p=1;
		}
		else p=0;
	}
	b[j][k]=0;
	for (i=j;i>1;i--)
	{
		k=0;
        while (b[i][k]!=0)
		{
			printf ("%c",b[i][k]);
		    k++;
		}
		printf (" ");

	}
		
	puts (b[i]);

}