int main()
{
	char str[14],substr[4];
	int i,j,n,a;
	char max;
	while(scanf("%s %s",str,substr)!=EOF)
	{
		max=str[0];
		n=strlen(str);
		for(i=1;i<n;i++)
		{
			if(str[i]>max)
			{
				max=str[i];
				a=i;
			}
		}
		for(j=0;j<a+1;j++)
		{
			printf("%c",str[j]);
		}
		for(j=0;j<3;j++)
		{
			printf("%c",substr[j]);
		}
		for(j=a+1;j<n;j++)
		{
			printf("%c",str[j]);
		}
		printf("\n");
	}
	return 0;
}