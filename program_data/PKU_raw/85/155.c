int main(int argc, char* argv[])
{
	int n,i,j,t,len;
	scanf("%d",&n);
	char s[20];
	for(i=0;i<n;i++)
	{
		t=0;
       scanf("%s",s);
	   len=strlen(s);
	   if(s[0]=='_'||s[0]>='A'&&s[0]<='Z'||s[0]>='a'&&s[0]<='z')
            t++;
	   for(j=1;s[j]!='\0';j++)
			{
				if(s[j]>='0'&&s[j]<='9'||s[j]=='_'||s[j]>='A'&&s[j]<='Z'||s[j]>='a'&&s[j]<='z')
					t++;
			}	
		if(t==len)
		printf("yes\n");
		else
		printf("no\n");
	}
	return 0;
}