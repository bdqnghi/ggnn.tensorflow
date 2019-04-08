void main()
{
	int n,i,l;
	char a[100],b[100][100]={'a'};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",a);
		l=strlen(a);
		if(a[l-3]=='i'&&a[l-2]=='n'&&a[l-1]=='g')
		{
			strncpy(b[i],a,l-3);
			continue;
		}
		if(a[l-2]=='e'&&a[l-1]=='r')
		{
			strncpy(b[i],a,l-2);
			continue;
		}
		if(a[l-2]=='l'&&a[l-1]=='y')
			strncpy(b[i],a,l-2);
	}
	for(i=0;i<n;i++)
		printf("%s\n",b[i]);
}



