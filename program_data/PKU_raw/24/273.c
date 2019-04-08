
int main()
{
	char s[3000],word[50][200]={0};	
	int a,i;
	int word_num=0,char_num=0;
	int min_num,max_num;
	int min=0,max=0;   

	gets(s);

	a=strlen(s);	
	for(i=0;i<a;i++)
	{	
		if(s[i]!=' ')
		{	
			word[word_num][char_num]=s[i];
			char_num++;
		}
		else if(s[i]==' '){		
			word_num++;
			char_num=0;
		}
	}

	min_num=strlen(word[0]);
	max_num=strlen(word[0]);
	for(i=1;i<=word_num;i++)
	{
		if(strlen(word[i])<min_num)
		{
			min_num=strlen(word[i]);
			min=i;
		}
		if(strlen(word[i])>max_num)
		{
			max_num=strlen(word[i]);
			max=i;
		}
	}
	
	printf("%s\n%s\n",word[max],word[min]);		
	
	return 0;
}	