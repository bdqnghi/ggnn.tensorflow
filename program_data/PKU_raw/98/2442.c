int main()
{
	int a,sum=0,i;
	char s[50];
	scanf("%d",&a);
	for (i=1;i<=a;i++)
	{
		scanf("%s",s);
		if (!sum)
		{
			printf("%s",s);
			sum=sum+(int)strlen(s);
		}
		else
		{
			if (sum+strlen(s)+1>80)
			{
				sum=0;
				printf("\n%s",s);
				sum=sum+(int)strlen(s);
			}
			else
			{
				sum=sum+(int)strlen(s)+1;
				printf(" %s",s);
			}
		}
	}
	return 0;
}