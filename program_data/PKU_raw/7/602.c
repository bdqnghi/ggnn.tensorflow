int main()
{
	char s1[256];
	char s2[256];
	char s3[256];
	int i,j,q;
	scanf("%s\n%s\n%s",s1,s2,s3);
//	printf("%s %s %s",s1,s2,s3);
	int k1=strlen(s1);
	int k2=strlen(s2);
	for(i=0;i<k1;i++)
	{
		int k=0;
		for(j=0;j<k2;j++)
		{
			if(s1[i+j]!=s2[j])
			{
				break;
			}
			if(s1[i+j]==s2[j])
			{
				k++;
			}
		}
		
		if(k==k2)
		{
			q=i;
			break;
		}
	}
	for(i=0;i<k1;i++)
	{
		if(i!=q)
		{
			printf("%c",s1[i]);
		}
		if(i==q)
		{
			printf("%s",s3);
			i=i+k2-1;
		}
	}


	
	return 0;
}