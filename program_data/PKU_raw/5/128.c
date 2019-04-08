int main()
{
	int i,s=0;
	int cmp(char s1,char s2);
	int ex(char s);
	float input=0;
	float sum=0,cor=0;
	char s1[501],s2[501];

	scanf("%f",&input);
	scanf("%s%s",s1,s2);

	sum=strlen(s1);
	
	for(i=0;s1[i]!=0;i++)
	{
		s+=ex(s1[i]);
		s+=ex(s2[i]);
		cor+=cmp(s1[i],s2[i]);
	}
	if(s)
	{
		printf("error\n");
		return 0;
	}
	else
	{
		if((cor/sum)>=input)
			printf("yes\n");
		else
			printf("no\n");
		return 0;
	}
}
int ex(char s)
{
	switch(s)
	{
	case 'A':;
	case 'T':;
	case 'C':;
	case 'G':return 0;break;
	default :return 1;break;
	}
}
int cmp(char s1,char s2)
{
	if(s1==s2)
		return 1;
	else
		return 0;
}