int main()
{
	int n,i,j,k;
	char a[101];
	scanf("%d",&n);
	for(k=1;k<=n;k++)
	{
		scanf("%s",a);
		printf("%s\n",a);
		for(i=strlen(a)-2;i>=0;i--)
		{
			if(a[i]=='(') 
			{
				for(j=i+1;j<strlen(a);j++)
				{
					if(a[j]==')')
					{
						a[i]=' ';
						a[j]=' ';
break;
					}
				}
			}
			
		}
		for(i=0;i<strlen(a);i++)
		{
			if(a[i]=='(') putchar('$');
			else if(a[i]==')') putchar('?');
			else putchar(' ');
		}
		putchar('\n');
			
	}
	return 0;
}