int main()
{
	char s1[256],s2[256],s3[256];
	int i,j,length1,length2,k;
	scanf("%s%s%s",s1,s2,s3);
	length1=strlen(s1);
	length2=strlen(s2);
	for(i=0;i<length1;i++)
	{
		j=0;
		for (;j<length2 && s1[i]==s2[j];j++)
				i++;
		if(j==length2)
		{
			for(k=0;k<length2;k++)
			s1[i-j+k]=s3[k];
			break;
		}
	}
	printf("%s",s1);
	return 0;
}