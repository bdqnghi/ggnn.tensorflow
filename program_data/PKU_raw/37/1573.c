
int main()
{
	int n,i,j,k;
	int state;
	int status;
	char str[100000];
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%s",str);
		status=1;
		for (j=0;j<strlen(str);j++)
		{
			state=0;
			if (str[j]!=1)
			{
				for (k=j+1;k<strlen(str);k++)
				{
					if (str[j]==str[k])
					{
						str[k]=1;
						state=1;
					}
				}
			}
			if (state)
			{
				str[j]=1;
			}
		}
		for (j=0;j<strlen(str);j++)
		{
			if (str[j]!=1)
			{
				printf("%c\n",str[j]);
				status=0;
				break;
			}
		}
		if (status)
		{
			printf("no\n");
		}
	}
	return 0;
}