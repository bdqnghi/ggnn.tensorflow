
int compare(char str1[],char str2[])
{
	if(strcmp(str1,str2)==0) return 1;
	else
	{
		int len1=strlen(str1),len2=strlen(str2),k;
		for(k=0;k<=len1-1;k++)
			if(str1[k]==str2[len2-1]) break;

		if(k==len1) return 0;
		else
		{
			int i;
			for(i=k;i<=len1-2;i++)
				str1[i]=str1[i+1];

			str1[len1-1]=0;
			str2[len2-1]=0;

			return compare(str1,str2);
		}
	}
}

void main(void)
{
	char str1[100],str2[100];
	scanf("%s %s",str1,str2);
	if(compare(str1,str2)) printf("YES\n");
	else printf("NO\n");
}