int main(void)
{
	char str1[1000],str2[1000];
	int count1[128]={0},count2[128]={0};
	scanf("%s",str1);
	scanf("%s",str2);
	int strl1=strlen(str1),strl2=strlen(str2);
	if(strl1!=strl2)
	{
		printf("NO");return 0;
	}
	for(int i=0;i<strl1;i++)	count1[str1[i]]++;
	for(int i=0;i<strl2;i++)	count2[str2[i]]++;
	for(int i=0;i<128;i++)
	{
		if(count1[i]!=count2[i])
		{
			printf("NO");return 0;
		}
	}
	printf("YES");
	return 0;
} 
