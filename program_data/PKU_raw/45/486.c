
void main()
{
	int g,i,j,a,b,lena,lenb,output;
	char m;
	char aa[50],bb[50];

	b=0;
	while ((m=getchar())!=' ')
	{
		bb[b]=m;
		b++;
	}
	lenb=b;

	a=0;
	while ((m=getchar())!='\n')
	{
		aa[a]=m;
		a++;
	}
	lena=a;

	for (i=lena;i>=1;i--)
	{
		if (aa[i]==bb[0])
		{
			g=1;
			for (j=0;j<lenb;j++)
			{
				if (aa[i+j]!=bb[j]) g=0;
				else g=g;
			}
			if (g==1) output=i;
		}
	}

	printf("%d",output);

}
	