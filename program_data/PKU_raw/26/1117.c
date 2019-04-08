int main()
{
	int i,p,n;
	char ori[101],tra[101];
	gets(ori);
	n=strlen(ori);
	tra[0]=ori[0];
	p=1;
	for(i=1;i<=n;i++)
	{
		if(ori[i]!=' '||ori[i-1]!=' ')
		{
			tra[p]=ori[i];
			p=p+1;
		}
		
	}
	printf("%s",tra);

	return 0;
}