
int main(int argc, char* argv[])
{
	int ALPHA1[27],alpha1[27],ALPHA2[27],alpha2[27],len1,len2,j,i,flag;
	char str1[100],str2[100];
	for(i=0;i<26;i++)
	{
		alpha1[i]=0;
		ALPHA1[i]=0;
		alpha2[i]=0;
		ALPHA2[i]=0;
	}
	scanf("%s %s",str1,str2);
	len1=strlen(str1);
	len2=strlen(str2);
	for(j=0;j<len1;j++)
	{
		for(i=0;i<26;i++)
		{
			if(str1[j]-'a'==i)
				alpha1[i]++;
			if(str1[j]-'A'==i)
				ALPHA1[i]++;
		}
	}
	for(j=0;j<len2;j++)
	{
		for(i=0;i<26;i++)
		{
			if(str2[j]-'a'==i)
				alpha2[i]++;
			if(str2[j]-'A'==i)
				ALPHA2[i]++;
		}
	}

	flag=0;
	for(i=0;i<26;i++)
	{
		if(alpha1[i]==alpha2[i]&&ALPHA1[i]==ALPHA2[i])
			flag=1;
		else
		{
			flag=0;
			break;
		}
	}
	if(1==flag)
		printf("YES\n");
	else
		printf("NO\n");

	return 0;
}

