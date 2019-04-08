int main()
{
	char ch[101],str[101];
	int i,j,k,m,n;
	scanf("%s",ch);
	m=strlen(ch);
	scanf("%s",str);
	n=strlen(str);
	k=0;
	if (m!=n)
		printf("NO");
	else
	{
		for (i=0;i<m;i++)
		{
			for (j=0;j<m;j++)
			{
				if (ch[i]==str[j])
				{
					k=k+1;
					str[j]=' ';
					break;
				}
			}
		}
		if (k==m)
		printf("YES");
		else
			printf("NO");
	}
	return 0;
}