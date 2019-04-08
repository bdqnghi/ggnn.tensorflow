void main()
{
	int n,i,flag=0,j;
	char b[80],a[80];
	scanf("%d",&n);
	gets(b);
	for(i=0;i<n;i++)
	{
		
		gets(a);
		if(a[0]=='_'||(a[0]<='z'&&a[0]>='a')||(a[0]<='Z'&&a[0]>='A'))
		{}
			else flag++;
			if(strlen(a)>1)
			{
		for(j=1;j<strlen(a);j++)
		{
			if(a[j]=='_'||(a[j]<='9'&&a[j]>='0')||(a[j]<='z'&&a[j]>='a')||(a[j]<='Z'&&a[j]>='A'))
			{}
			else flag++;
			
		}
			}
		if(flag==0)
			printf("1\n");
			else
			printf("0\n");
			flag=0;
	}
}
