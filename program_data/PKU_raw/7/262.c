int main()
{	
	int i,j,a,m;
	char s1[300],s2[300],s3[300];
	scanf("%s %s %s",s1,s2,s3);
	m=strlen(s1);
	a=strlen(s2);
	for(i=0;i<m;i++)
	{
		for(j=0;j<a;j++)
		{
			if(s2[j]!=s1[i+j])
			break;
		}
		if(j==a)
		{	
			for(j=0;j<a;j++)
			{
				s1[i+j]=s3[j];}
			break;
		};
	}
	printf("%s",s1);
	return 0;
}