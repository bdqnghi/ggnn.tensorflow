void main()
{
	char str1[101]={"\0"},str2[101]={"\0"};
	int i,j,k=0;
	gets(str1);
	for(i=0,k=0,j=1;str1[j]!='\0';i++,j++,k++)
		str2[k]=str1[i]+str1[j];
	str2[k]=str1[i]+str1[0];
	for(i=0;str2[i]!='\0';i++)
		printf("%c",str2[i]);
}


