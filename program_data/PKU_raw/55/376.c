main()
{
	char a[100],b[100];
	int i,j,n,k,l=0;
	long c=0;
	scanf("%d %s %d",&i,a,&j);
	n=strlen(a);
	for(k=0;k<n;k++)
	{
		if(a[k]>='A'&&a[k]<='Z')
			a[k]=a[k]-'A'+10;
		else if(a[k]>='a'&&a[k]<='z')
			a[k]=a[k]-'a'+10;
		else
			a[k]=a[k]-'1'+1;
	}
	for(k=0;k<n;k++)
		c=c*i+a[k];
	for(k=0;;k++)
	{
		b[k]=c%j;
		if(b[k]>=10)
			b[k]=b[k]-10+'A';
		else
			b[k]=b[k]+'1'-1;
		c=c/j;
		l=l++;
		if(c==0)
			break;
		
	}
	for(k=0;k<l;k++)
		printf("%c",b[l-k-1]);
}
