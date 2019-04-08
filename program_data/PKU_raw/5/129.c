int main ()
{
	int i,c=0,d=0,e=0,g=0;
	double f,k;
	char a[503],b[503];
	scanf("%lf",&k);
	scanf ("%s",a);
	scanf ("%s",b);
	for (i=0;i<503;i++)
	{
		if (a[i]=='\0')
			break;
		else
			c=c+1;
		if (a[i]!='T'&&a[i]!='A'&&a[i]!='C'&&a[i]!='G')
			g=g+1;
			
	}
	for (i=0;i<503;i++)
	{
		if (b[i]=='\0')
			break;
		else
			d=d+1;
		if (b[i]!='T'&&b[i]!='A'&&b[i]!='C'&&b[i]!='G')
			g=g+1;
	}
	if (c!=d||g!=0)
		printf ("error\n");
	else
	{
		for (i=0;i<c;i++)
		{
			if (a[i]==b[i])
				e=e+1;
		}
		f=1.0*e/c;
		if(f>k)
			printf ("yes\n");
		else
			printf("no\n");
	}
	return 0;
}