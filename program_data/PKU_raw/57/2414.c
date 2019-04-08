int main(int argc, char* argv[])
{
	int i,n,j,l=0,a;
	char temp[4];
	char temp1[4];
	scanf("%d",&n);
	char s[100];
	char result[100];
	for(i=0;i<n;i++)
	{
		l=0;
		scanf("%s",s);
		a=strlen(s);
		if (s[a-2]=='e'||s[a-2]=='l')
		{
			for(j=a-2;s[j]!='\0';j++)
			{	
				
				temp[l]=s[j];
				l++;
			}
			temp[l]='\0';
			if (strcmp(temp,"er")==0)
			{
				for(j=0;j<a-2;j++)
				{
					result[j]=s[j];
				}
				result[j]='\0';
				printf("%s\n",result);
			}
			if (strcmp(temp,"ly")==0)
			{
				for(j=0;j<a-2;j++)
				{
					result[j]=s[j];
				}
				result[j]='\0';
				printf("%s\n",result);
			}
		}
		if (s[a-3]=='i')
		{
			for(j=a-3;s[j]!='\0';j++)
			{	
				
				temp1[l]=s[j];
				l++;
			}
			temp1[l]='\0';
			if (strcmp(temp1,"ing")==0)
			{
				for(j=0;j<a-3;j++)
				{
					result[j]=s[j];
				}
				result[j]='\0';
				printf("%s\n",result);
			}
		}

	}
	return 0;
}

