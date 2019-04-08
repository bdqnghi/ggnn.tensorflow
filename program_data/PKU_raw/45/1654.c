int main()
{
	char s[50];
	char w[50];
	int i=0,j=0;
	int result=0;
	scanf("%s %s",s,w);
	for(i=0;w[i]!='\0';i++)
	{
		if(s[0]==w[i])
		{
			result=1;
			for(j=0;s[j]!='\0';j++)
				if(s[j]=w[i+j])
					continue;
				else
				{
					result=0;
					break;
				}
		}
		if(result==1)
			break;
	}
	printf("%d",i);
	return 0;
}