
int main(int argc, char* argv[])
{
	char str1[81],str2[81];
	gets(str1);
	gets(str2);
	int i,n=0;
	for(i=0;i<=81&&str1[i]!='\0'&&str2[i]!='\0';i++)
	{
        if(str1[i]<97)str1[i]=str1[i]+32;
		if(str2[i]<97)str2[i]=str2[i]+32;
		if(str1[i]<str2[i])
		{
			printf("<");
			n=1;
			break;
		}
		if(str1[i]>str2[i])
		{
			printf(">");
			n=1;
			break;
		}
	}
	if(n==0)printf("=");
	return 0;
}

