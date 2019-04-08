int main()
{
	char a[200];
	int n, i, j, k, m;
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		scanf("%s", a);
		puts(a);
		k=strlen(a);
		for(j=0;j<k;j++)
		{
			if(a[j]==')')
			{
				for(m=j;m>=0;m--)
					if(a[m]=='(')
					{a[m]=' ';a[j]=' ';break;} 
			}
			if(a[j]!='('&&a[j]!=')')
				a[j]=' ';
		}
		for(j=0;j<k;j++)
		{
			if(a[j]=='(')
			{
				a[j]='$';
			}
		    else if(a[j]==')')
			{
				a[j]='?';	
			}
		}
		puts(a);
	}
	return 0;
}