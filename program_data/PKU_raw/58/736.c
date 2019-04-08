int main()
{
	char a[100][80],c[100];
	int n,l,i,j,flag=0;
    scanf("%d",&n);
	gets(c);
	for(i=0;i<n;i++)
	{
		gets(a[i]);
		l=strlen(a[i]);
        for(j=0;j<l;j++)
		{
			if(((a[i][0]>='A'&&a[i][0]<='Z')||(a[i][0]>='a'&&a[i][0]<='z')||a[i][0]=='_')&&((a[i][j]>='A'&&a[i][j]<='Z')||(a[i][j]>='a'&&a[i][j]<='z')||a[i][j]=='_'||(a[i][j]>='0'&&a[i][j]<='9')))
                flag=flag;
			else
				flag++;
		}
		if(flag==0)
			printf("1\n");
		else
			printf("0\n");
		flag=0;
	}
	return 0;
}