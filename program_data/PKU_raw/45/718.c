int main ()
{
	char a[50],b[50],c[100];
	int i=0,j,q,lena,lenb,w=0;
		gets(c);
	while (c[i]!=' ')
	{
		a[i]=c[i];
		i++;
	}
	for (j=1+i;j<strlen(c);j++)
		b[j-1-i]=c[j];
	lenb=strlen(b);
	lena=strlen(a);
	for (i=0;i<lenb;i++)
	{
		if (b[i]!=a[0])
			continue;
		else 
		{
			q=i;
			for(j=i;j<i+lena;j++) 
			{
				if (b[j]==a[j-q])
					w=w+1;
			}
			if (w==lena)
				printf ("%d",q);
		}
	}
	return 0;
}
