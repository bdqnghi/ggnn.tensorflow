int main()
{
	int n;
	scanf("%d\n",&n);
	int i,j;
	for(i=0;i<n;i++)
	{
	    char s[100];
		gets(s);
		int r=0;
		if((s[0]<='z'&&s[0]>='a')||s[0]=='_'||(s[0]<='Z'&&s[0]>='A'))
		{
			for(j=1;s[j]!='\0';j++)
			{

			    char b;
			    b=s[j];
			    if((b<='z'&&b>='a')||(b<='Z'&&b>='A')||(b<='9'&&b>='0')||(b=='_'))
				{
				    r++;
				}
			    else
				{
			        printf("no\n");
			     	break;
				}
			}
		    if(s[j]=='\0')
			{
				printf("yes\n");
			}
		}
   	    else
		{
			printf("no\n");
		}
	}
	return 0;
}