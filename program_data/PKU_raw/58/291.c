int main()
{
	int i,j,l,counter;
	char c[2];
	gets(c);
	int n=atoi(c);
	char a[100];
	for(i=0;i<n;i++)
	{
		gets(a);
		l=strlen(a);
		if(!((a[0]>='A'&&a[0]<='Z')||(a[0]>='a'&&a[0]<='z')||a[0]=='_'))
			printf("0\n");
		else
		{
			for(j=1,counter=0;j<l;j++)
				if(!((a[j]>='A'&&a[j]<='Z')||(a[j]>='0'&&a[j]<='9')||(a[j]>='a'&&a[j]<='z')||a[j]=='_'))
				{
					printf("0\n");
					counter++;
					break;
				}
			if(counter==0)
				printf("1\n");
		}
	}
	return 0;
}