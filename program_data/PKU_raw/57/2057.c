int main(int argc, char* argv[])
{
	int n,i,j,len;
	char s[255];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",s);
		len=strlen(s);
			if(s[len-1]=='r'&&s[len-2]=='e'||s[len-1]=='y'&&s[len-2]=='l')
			{
				for(j=0;j<(len-2);j++)
					printf("%c",s[j]);
			}
			else if(s[len-1]=='g'&&s[len-2]=='n'&&s[len-3]=='i')
			{
                for(j=0;j<(len-3);j++)
                    	printf("%c",s[j]);
			}
			else 
			{
				 for(j=0;j<len;j++)
				printf("%c",s[j]);
			}
			printf("\n");
	}
	return 0;
}