int main()
{
	char s1[100]={'\0'},s2[100]={'\0'},c;
	scanf("%s %s",s1,s2);
	int i,j,l1=strlen(s1),l2=strlen(s2);
	if(l1!=l2)
		printf("NO");
	else
	{
		for(i=1;i<=l1-1;i++)
		{
			for(j=0;j<=l1-i-1;j++)
			{
				if(s1[j]>s1[j+1])
				{
					c=s1[j+1];
					s1[j+1]=s1[j];
					s1[j]=c;
				}
			}
		}
		for(i=1;i<=l1-1;i++)
		{
			for(j=0;j<=l1-i-1;j++)
			{
				if(s2[j]>s2[j+1])
				{
					c=s2[j+1];
					s2[j+1]=s2[j];
					s2[j]=c;
				}
			}
		}
		if(strcmp(s1,s2)==0)
			printf("YES");
		else
			printf("NO");
	}
}