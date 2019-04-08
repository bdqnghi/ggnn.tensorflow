int main()
{
	int n,i,s,j,k;
	char c[101];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		getchar();
		scanf("%s",&c);
		s=strlen(c);
		printf("%s\n",c);
		for(j=0;j<s;j++)
		{
			if(c[j]!='(' && c[j]!=')')
				c[j]=' ';
			if(c[j]==')')
			{
				for(k=j;k>=0;k--)
				{
					if(c[k]=='(')
					{
						c[j]=' ';
						c[k]=' ';
						break;
					}
				}
			}
		}
		for(j=0;j<s;j++)
		{
			if(c[j]=='(')
				c[j]='$';
			if(c[j]==')')
				c[j]='?';
		}
		printf("%s\n",c);
	}
	return 0;
}