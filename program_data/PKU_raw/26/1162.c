void main()
{
	int i,l,k=0;
	char a[101]={0};
	char b[101]={0};
	gets(a);
    l=strlen(a);
	for(i=0;i<l;i++)
		if(a[i]!=' '||a[i-1]!=' ')
		{
			b[k]=a[i];
			k++;
		}
	puts(b);
}