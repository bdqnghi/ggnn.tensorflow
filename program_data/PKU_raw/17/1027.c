int main ()
{
	int i,j,n;
	char a[100],b[100];
	while(gets(a)!=NULL)
	{
	    n=strlen(a);
		for(i=0;i<n;i++) b[i]=' ';
        for(i=0;i<n;i++)
		{
			if((a[i]=='(')||(a[i]==')')) b[i]=a[i];
		}
		for(i=0;i<n;i++) printf("%c",a[i]);
		printf("\n");
		for(i=n-1;i>=0;i--)
		{
			if(b[i]=='(')
			{
				for(j=i;j<n;j++)
				{
					if(b[j]==')') 
					{
						b[i]=' ';b[j]=' ';a[i]=' ';a[j]=' ';
						break;
					}
				}
			}
		}
		for(i=0;i<n;i++)
		{
			if(a[i]=='(') a[i]='$';
			else if(a[i]==')') a[i]='?';
			else a[i]=' ';
		}
		for(i=0;i<n;i++) printf("%c",a[i]);
		printf("\n");
	}
}