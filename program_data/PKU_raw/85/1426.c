
void main()
{
	int i,j,l,n,flag=0;
	char a[21]={'\0'};
	scanf ("%d\n",&n);
	for (i=0;i<n;i++)
	{
		flag=0;
		gets(a);
		l=strlen(a);
		for (j=0;j<l;j++)
		{
			if (a[j]>='0' && a[j]<='9')
				continue;
			else if (a[j]>='a' && a[j]<='z')
				continue;
			else if (a[j]>='A' && a[j]<='Z')
				continue;
			else if (a[j]=='_')
				continue;
			else
				flag=1;
		}
		if ( (a[0]>='a' && a[0]<='z') || (a[0]>='A' && a[0]<='Z') || a[0]=='_' )
			flag=flag;
		else
			flag=1;
		if (flag==1)
			printf("no\n");
		else
			printf ("yes\n");
	}
}
