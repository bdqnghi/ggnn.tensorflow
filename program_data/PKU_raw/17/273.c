int main()
{
	void function(char a[200]);
	char a[200];
	while(scanf("%s",a)!=EOF)
	{
		function(a);
		printf("%s\n",a);
	}
	return 0;
}
void function(char a[200])
{
		int p[200];
	    int q[200];
	    int pa=0,qa=0,t1,t2,j,i,l;
		pa=0;qa=0;
		printf("%s\n",a);
		l=strlen(a)-1;
		for(i=0;i<=l;i++)
		{
			if(a[i]=='(')
			{
				p[pa]=i;
				pa++;
			}
			else if(a[i]==')')
			{
				q[qa]=i;
				qa++;
			}
			else a[i]=' ';
		}
		for(i=pa-1;i>=0;i--)
		{
			for(j=0;j<qa;j++)
			{
             	t1=p[i];t2=q[j];
				if(p[i]<q[j]&&a[t2]!=' ')
				{
					a[t1]=' ';a[t2]=' ';
					break;
				}
			}
			if(j==qa)
			{
				t1=p[i];
				a[t1]='$';
			}
		}
		for(j=0;j<qa;j++)
		{
			t2=q[j];
			if(a[t2]==')')
				a[t2]='?';
		}
}