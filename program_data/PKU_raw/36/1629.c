int main ()
{
	char s1[10000],s2[10000];
	scanf("%s %s",s1,s2);
	int i;
	int len1=strlen(s1);
	int len2=strlen(s2);
	if(len1!=len2)
	{
		printf("NO\n");
	}
	else
	{
		int i,j;
		for (i=0;i<len1;i++)
		{
            for(j=0;j<len1;j++)
			{
				if(s1[i]==s2[j])
				{
					s2[j]=' ';
					break;
				}
			}
		}
		j=0;
		for(i=0;i<len2;i++)
		{
			if(s2[i]!=' ')
				j++;
		}
		if(j==0)
			printf("YES\n");
		else printf("NO\n");
	}
}