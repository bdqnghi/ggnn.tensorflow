void f(char c[],char str[],int n)
{
	int a,i,j;
	for(i=0;i<=n-1;i++)
	{
		if(c[i]=='(')
		{
			a=1;
			for(j=i+1;j<=n-1;j++)
			{
				if(c[j]=='(') a++;
				else if(c[j]==')') a--;
				if(a==0) break;
			}
			if(a>0) str[i]='$';
		}
		if(c[i]==')')
		{
			a=-1;
			for(j=i-1;j>=0;j--)
			{
				if(c[j]==')') a--;
				else if(c[j]=='(') a++;
				if(a==0) break;
			}
			if(a<0) str[i]='?';
		}
	}
}
int main()
{
	int r=0;
	while(r<=5)
	{
		char c[110]={0},str[110]={0};
		int n,i;
		gets(c);
		n=strlen(c);
		for(i=0;i<=n-1;i++)
			str[i]=' ';
		f(c,str,n);
		puts(c);
		puts(str);
		r++;
	}
	return 0;
}