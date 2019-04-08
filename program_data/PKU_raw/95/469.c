void main()
{
	int i,flag,n;
	char a[100],b[100];
	gets(a);
	gets(b);
	n=strlen(a);
	flag=0;
	for(i=0;i<n;i++)
	{
		if(a[i]!=b[i])
		{
			if(a[i]>='a')
				a[i]-='a'-'A';
			if(b[i]>='a')
				b[i]-='a'-'A';
			if(a[i]!=b[i])
			{
				flag=(a[i]>b[i])?1:-1;
				break;
			}
		}
	}
	if(flag==0)
		printf("=");
	else if(flag==1)
		printf(">");
	else
		printf("<");
}
