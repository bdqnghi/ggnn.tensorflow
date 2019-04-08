int main()
{
	int a,i;
	char str1[100]={0},str2[100]={0};
	gets(str1);
	gets(str2);
	for(i=0;i<=99;i++)
	{
		if(!((str1[i]>='A'&&str1[i]<='Z'||str1[i]>='a'&&str1[i]<='z')&&
			(str2[i]>='A'&&str2[i]<='Z'||str2[i]>='a'&&str2[i]<='z')))
		a=str1[i]-str2[i];
		if(str1[i]>='a'&&str1[i]<='z')str1[i]=str1[i]-'a'+'A';
		if(str2[i]>='a'&&str2[i]<='z')str2[i]=str2[i]-'a'+'A';
		a=str1[i]-str2[i];
		if(a!=0)break;
	}
	if(a<0)printf("<");
	if(a>0)printf(">");
	if(a==0)printf("=");
	return 0;
}