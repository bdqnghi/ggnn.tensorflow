main()
{
	int i,j;
	int max,l;
	char s1[11],s2[4],s3[20];
	while (scanf("%s%s",s1,s2)!=EOF)
	{
		max=s1[0];
		for(i=1;i<strlen(s1);i++)
			{
			if(s1[i]>max)
			max=s1[i];
			}
		for(i=0;i<strlen(s1);i++)
		{
			if(s1[i]==max)
			{
				l=i;
				break;
			}
		}
		for(i=0;i<=l;i++)
			s3[i]=s1[i];
		for(i=0;i<strlen(s2);i++)
			s3[i+l+1]=s2[i];
		for(i=0;i<strlen(s1)-l-1;i++)
			s3[l+strlen(s2)+1+i]=s1[l+i+1];
		for(i=0;i<strlen(s1)+strlen(s2);i++)
			printf("%c",s3[i]);
		printf("\n");
	}
}