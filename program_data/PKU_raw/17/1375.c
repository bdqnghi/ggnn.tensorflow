int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		int left=0;
		int p[105],t=0;
		int k,len;
		char a[105];
		char b[105];
		scanf("%s",a);
		len=strlen(a);
		for(k=0;k<len;k++)
			b[k]=' ';
		b[len]='\0';
		for(k=0;k<len;k++)
		{
			if(a[k]=='(')
			{
				b[k]='$';
				p[t]=k;
				t++;
				left++;
			}
			if(a[k]==')')
			{
				if(left!=0)
				{
					t--;
					b[p[t]]=' ';
					left--;
				}
				else
				{
					b[k]='?';
				}
			}
		}
		printf("%s",a);
		printf("\n");
		printf("%s",b);
		printf("\n");
	}
	return 0;
}




