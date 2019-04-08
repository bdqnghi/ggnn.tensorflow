
void match(char *s)
{
	int a[100],i,j=0;
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]=='(')
		{
			s[i]='$';
			a[j]=i;              //??????a??? 
			j++;
		}
		else if(s[i]==')')
		{
			if(j>0)               //j>0?????? 
			{
				s[i]=' ';
				s[a[j-1]]=' ';          //??????????? 
				j--;                     //??????? 
			}
			else s[i]='?';
		}
		else s[i]=' ';
	}
}

int main()
{
	int n,i;
	char s[101];
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		gets(s);
		puts(s);
		match(s);
		puts(s);
	}
	return 0;
}