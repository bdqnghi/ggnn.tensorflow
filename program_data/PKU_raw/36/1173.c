
int main(int argc, char* argv[])
{
	char str1[50],str2[50];
	int len1,len2;
	int i,j,m=0;

	scanf("%s%s",str1,str2);
	len1=strlen(str1);
	len2=strlen(str2);

	if(len1!=len2)
		printf("NO\n");

	else
	{
		for(i=0;i<len1;i++)
		{
			for(j=0;j<len2;j++)
			{
				if(str1[i]==str2[j] && str2[j]!=0)
				{
					str2[j]=0;
					m=1;break;
				}
				else
					m=0;
			}
		}

		if(m)
			printf("YES\n");
		else
			printf("NO\n");
	}

	return 0;
}