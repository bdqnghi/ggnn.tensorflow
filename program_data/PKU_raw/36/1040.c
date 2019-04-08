int main()
{
	char s1[80],s2[80],t;
	int l1,l2,i,j;
	scanf("%s %s",s1,s2);
	l1=strlen(s1);
	l2=strlen(s2);
	if(l1!=l2)
		printf("NO\n");
	else
	{
		for(i=0;i<=l1-2;i++)
		{
			for(j=i+1;j<=l1-1;j++)
			{
				if(s1[i]<s1[j])
				{
					t=s1[i];s1[i]=s1[j];s1[j]=t;
				}
				if(s2[i]<s2[j])
				{
					t=s2[i];s2[i]=s2[j];s2[j]=t;
				}
			}
		}
		if(strcmp(s1,s2)==0)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}

