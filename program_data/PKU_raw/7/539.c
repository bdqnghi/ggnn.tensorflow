int main()
{
	char s1[500],s2[20],s3[20];
	int i,j,len1,len2,len3,count,c=0;
	
	gets(s1);
	gets(s2);
	gets(s3);
	len1=strlen(s1);
	len2=strlen(s2);
	len3=strlen(s3);
	
	for (i=0;i<len1;i++)
	{
		count=0;
		if (s1[i]==s2[0])
			for (j=0;j<len2;j++)
				if (s1[i+j]==s2[j])
					count++;
		if (count==len2)
			break;
	}
	for (j=0;j<i;j++)
		printf("%c",s1[j]);
if (i!=len1)
	printf("%s",s3);
	for (j=i+len2;j<len1;j++)
		printf("%c",s1[j]);
	return 0;
}