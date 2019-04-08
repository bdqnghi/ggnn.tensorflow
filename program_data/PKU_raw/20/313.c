main()
{
	char a[11],b[4],c[14];
	int i,k;
	char p;
	for (;;)
	{
		for (i=0;i<11;i++)
			a[i]=0;
		for (i=0;i<4;i++)
			b[i]=0;
		for (i=0;i<14;i++)
			c[i]='\0';
		scanf("%s",a);
		if (a[0]=='\0')
			break;
		scanf("%s",b);
		p=a[0];
		k=0;
		for (i=0;a[i]!='\0';i++)
		{
			if (p<a[i])
			{
				p=a[i];
				k=i+1;
			}
		}
		for (i=0;i<k;i++)
			c[i]=a[i];
		for (i=0;i<3;i++)
			c[k+i]=b[i];
		for (i=k;a[i]!='\0';i++)
			c[i+3]=a[i];
		printf("%s\n",c);
	}
}