void main()
{
	char a[3000];
	int l[300],i,p,k,ch,j;
	gets(a);
	ch=strlen(a);
	for(i=0,j=0,l[0]=0;i<ch;i++)
	{
		if(a[i]!=' ')
			l[j]++;
		if(a[i]==' ')
		{
			j++;
			l[j]=0;
		}
	}
	p=j;
	for(i=0,k=0;i<=p;i++)
	{
		if(l[i]!=0)
			k=i;
	}
	for(i=0;i<k;i++)
		if(l[i]!=0)
    printf("%d,",l[i]);
	printf("%d\n",l[k]);
}
