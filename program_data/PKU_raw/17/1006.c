char a[200];
void match(char a[])
{
	
	int s;
	s=strlen(a);
	if(s==0) return;
	int i,j;
	int check=0;
	for(i=0;i<s-1;i++)
	{
		if(a[i]=='(')
		{
			for(j=i+1;j<s&&a[j]==' ';j++);
			if(j<s)
			{
				if(a[j]==')')
				{
					check=1;
					break;
				}
			}
		}
	}
	if(check==1)  
	{
		a[i]=' ';
		a[j]=' ';
		match(a);
	}
	if(check==0)
		return;
}
int main()
{
	
	int n;
	scanf("%d",&n);
	char temp;
	scanf("%c",&temp);
	while(n--)
	{   
		
		gets(a);
		puts(a);
        int s;
	    s=strlen(a);
		int i;
		for(i=0;i<s;i++)
			if(a[i]!='('&&a[i]!=')') a[i]=' ';
		match(a);
		for(i=0;i<s;i++)
		{
			if(a[i]=='(') a[i]='$';
			else if(a[i]==')') a[i]='?';
		}
		puts(a);
	}
	return 0;
}