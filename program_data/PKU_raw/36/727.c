void main()
{
	char s1[10],s2[10],c;
	int n1,n2,i,j,k;
	scanf("%s %s",s1,s2);
	n1=strlen(s1);
	n2=strlen(s2);
	if(n1!=n2)
	{
		printf("NO");
	}
	else
	{
		for(i=0;i<=n1-1;i++)
		{
			for(j=0;j<n1-i;j++)
			{
				if(s1[j]<=s1[j+1])
				{
					c=s1[j];s1[j]=s1[j+1];s1[j+1]=c;
				}
			}
		}
		for(i=0;i<=n2-1;i++)
		{
			for(j=0;j<n2-i;j++)
			{
				if(s2[j]<=s2[j+1])
				{
					c=s2[j];s2[j]=s2[j+1];s2[j+1]=c;
				}
			}
		}
		if(strcmp(s1,s2)==0)
			printf("YES");
		else printf("NO");
	}
}

