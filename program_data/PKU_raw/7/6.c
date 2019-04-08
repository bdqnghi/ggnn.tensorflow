void main()
{
	char s[300],a[300],b[300];
	int n,m,i,j,p;
	scanf("%s\n%s\n%s",s,a,b);
	n=strlen(s);
	m=strlen(a);

	for(i=0,j=0;i<m,j<n;j++)
	{
		if(a[i]==s[j])
		{
			p=j;
			i++;
			if(i==m) break;
		}
        else i=0; 
	}

	if(i==m)
		for(i=0;i<m;i++)
			s[p-m+1+i]=b[i];

	printf("%s\n",s);
}