int main()
{
	int n;
	char s[50];
	int i,j;
	int mark;
	int len;
	scanf("%d",&n);
	gets(s);
	for(i=0;i<n;i++)
	{
		mark=0;
		gets(s);
		len=strlen(s);
		if((s[0]==95)||(s[0]>=65&&s[0]<=90)||(s[0]>=97&&s[0]<=122))
			mark=mark;
		else
			{
			  printf("no\n");
		      continue;
			}
		for(j=1;j<len;j++)
		{
			if((s[j]==95)||(s[j]>=65&&s[j]<=90)||(s[j]>=97&&s[j]<=122)||(s[j]>=48&&s[j]<=57))
				mark=mark;
			else mark=mark+1;
		}
		if(mark==0)
			printf("yes\n");
		else
			printf("no\n");

	}
	return 0;

}
