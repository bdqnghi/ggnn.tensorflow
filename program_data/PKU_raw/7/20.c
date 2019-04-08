int main()
{
	char s1[500],s2[20],s3[20];
	int i,j,len1,len2,count,c=0;
	
	gets(s1);
	gets(s2);
	gets(s3);
	len1=strlen(s1);
	len2=strlen(s2);
	
	for (i=0;i<len1;i++)
	{
		count=0;
		if (s1[i]==s2[0])
			for (j=0;j<len2;j++)
				if (s1[i+j]==s2[j])
					count++;
		if (count==len2)
		{
			for (j=0;j<len2;j++)
				s1[i+j]=s3[j];
			c++;
		}
		if (c==1)
			break;
	}
	puts(s1);
	return 0;
}