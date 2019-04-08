void main()
{

	int n,i,j,k,m;
	scanf("%d",&n);
			getchar();
	for(i=0;i<n;i++)
	{
			char a[200]={0};
	char b[200]={0};
		gets(a);
		k=strlen(a);
		for(j=0;j<k;j++)
		{
			if(a[j]=='(')
				b[j]='$';
			else if(a[j]==')')
				b[j]='?';
			else b[j]=' ';
		}
//		puts(b);



		for(j=1;j<k;j++)
		{
			if(b[j]=='?')
			{
				for(m=j-1;m>=0;m--)
					if(b[m]=='$')
					{
						b[m]=' ';
						b[j]=' ';
						break;
					}
			}
		}
			printf("%s\n%s\n",a,b);	}
}
		

