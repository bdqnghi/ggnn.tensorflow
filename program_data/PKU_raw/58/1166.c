int main(int argc, char* argv[])
{
	int n,i,j,flag;
	char str[81];
    scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		flag=0;
		gets(str);
		if(str[0]=='_'||str[0]>='a'&&str[0]<='z'||str[0]>='A'&&str[0]<='Z')
		{
			for(j=0;str[j];j++)
			{
				if(str[j]=='_'||str[j]>='a'&&str[j]<='z'||str[j]>='A'&&str[j]<='Z'||str[j]>='0'&&str[j]<='9')
					continue;
				else
				{
					flag=1;
					break;
				}
			}
		}
		else flag=1;
		if(flag==0)
			printf("1\n");
		else
			printf("0\n");
	}
	return 0;
}