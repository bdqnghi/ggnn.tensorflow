int main()
{
	char c1[50]={0},c2[50]={0};
	int i,j,l1,l2;
	scanf("%s %s",c1,c2);
	l1=strlen(c1);
	l2=strlen(c2);
	if(l1!=l2)
	{
		printf("NO\n");
		return 0;
	}
	for(i=0;i<l1;i++)
	{
		for(j=0;j<l2;j++)
		{
			if(c1[i]==c2[j])
			{
				c2[j]=0;
				break;
			}
			if(j==l2-1)
			{
				printf("NO\n");
				return 0;
			}
		}
	}
	printf("YES\n");
	return 0;
}
