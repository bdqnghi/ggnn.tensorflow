
//???????

int main()
{
	char str1[100], str2[100], t;
	int n, i;

	gets(str1);
	gets(str2);

	for(i=0; (t=str1[i])!='\0'; i++)
		if(str1[i]<='Z'&&str1[i]>='A')
			str1[i]=str1[i]+32;
	for(i=0; (t=str2[i])!='\0'; i++)
		if(str2[i]<='Z'&&str2[i]>='A')
			str2[i]=str2[i]+32;

	if(strcmp(str1, str2)>0)
		printf(">");
	else if(strcmp(str1, str2)==0)
		printf("=");
	else
		printf("<");

	return 0;
}