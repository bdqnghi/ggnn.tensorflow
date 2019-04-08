
void main()
{
	int i,n;
	char a[100],b[100],c;
	gets(a);
	gets(b);
	n=strlen(a)>strlen(b)?strlen(a):strlen(b);
	for (i=0;i<n;i++)
	{
		if (a[i]>='A'&&a[i]<='Z'&&b[i]<='z'&&b[i]>='a')
			b[i]=b[i]-32;
		if (a[i]>='a'&&a[i]<='z'&&b[i]<='Z'&&b[i]>='A')
			a[i]=a[i]-32;
    }

	if (strcmp(a,b)>0)
		printf(">");
	else if (strcmp(a,b)==0)
		printf("=");
	else 
		printf("<");
	

}