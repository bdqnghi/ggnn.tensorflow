
int main(int argc, char* argv[])
{
	char str[11],substr[4];
	int i,j,max=0,len;
	while(scanf("%s%s",str,substr)!=EOF)
	{
    len=strlen(str);
	max=0;
	for(j=0;j<len;j++)
	{
	if(str[max]<str[j+1])
	max=j+1;
	}
	for(i=0;i<len;i++)
	{
	printf("%c",str[i]);
	if(i==max)
		printf("%s",substr);
	}
	printf("\n");
	}
		return 0;
}