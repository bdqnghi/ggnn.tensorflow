static char c[2][101];
int i,n;
void search(int a)
{
	for(i++;i<n;i++)
	if(c[0][i]==')')
	{
		c[1][a]=' ';
		c[1][i]=' ';
		break;}
	else if(c[0][i]=='(')
	search(i);
	else c[1][i]=' ';
	if(i>=n)
	c[1][a]='$';
}
int main()
{
	while(scanf("%s",&c[0])!=EOF)
	{
		for(n=0;c[0][n]!='\0';n++);
		for(i=0;i<n;i++)
		if(c[0][i]==')')
		c[1][i]='?';
		else if(c[0][i]=='(')
		search(i);
		else c[1][i]=' ';
		puts(c[0]);
		puts(c[1]);
		for(i=0;i<n;i++)
		{
			c[0][i]=0;
			c[1][i]=0;
			}
		}
}