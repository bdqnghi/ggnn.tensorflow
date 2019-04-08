main()
{
    int n;
	scanf("%d",&n);
	getchar();
	int i,j,k,BL;
	char a[85];
	for (i=0;i<n;i++)
	{
		gets(a);
		BL=1;
		//if '_'begin
		if (a[0]=='_')
		{
			for (j=1;j<strlen(a);j++)
				if (a[j]!='-')
					break;
			for (k=j;k<strlen(a);k++)
				if ((a[k]>='a' && a[k]<='z') || (a[k]>='A' && a[k]<='Z') || (a[k]=='_') || (a[k]>='0' && a[k]<='9'))
					BL=1;
				else
				{
					BL=0;
					break;
				}
		}
		else if ((a[0]>='a' && a[0]<='z') || (a[0]>='A' && a[0]<='Z'))
		{
			for (k=0;k<strlen(a);k++)
				if ((a[k]>='a' && a[k]<='z') || (a[k]>='A' && a[k]<='Z') || (a[k]=='_') || (a[k]>='0' && a[k]<='9'))
					BL=1;
				else
				{
					BL=0;
					break;
				}
		}
		else 
			BL=0;
		printf("%d\n",BL);
	}
}