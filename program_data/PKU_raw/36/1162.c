int judge(char*a,char*b);
int main(int argc, char* argv[])
{
	char a[100]={'\0'},b[100]={'\0'};
	scanf("%s%s",a,b);
	if(judge(a,b)==1)
		printf("YES");
	else printf("NO");
	return 0;
}
int judge(char*a,char*b)
{
	int i=0,j=0;
	if (strlen(a)!=strlen(b))
		return 0;
	for(i=0;i<strlen(a);i++)
	{
		for(j=0;j<strlen(a);j++)
		{
			if(*(a+i)==*(b+j))
			{
				*(a+i)=' ';
				*(b+j)=' ';
			}
		}
	}
	for(i=0;i<strlen(a);i++)
	{
		if (*(a+i)!=' ')
			return 0;
	}
	return 1;
}