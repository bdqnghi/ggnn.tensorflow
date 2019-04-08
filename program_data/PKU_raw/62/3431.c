//Patricia.Xiao
int main()
{
	char c[1000];
	int l;
	int i;
	gets(c);  //?????
	l=strlen(c);
	if(c[0]!=' ')
		printf("%c",c[0]);   //?????
	for(i=1;i<l;i++)
	{
		if(c[i]!=' ')       //???????????
			printf("%c",c[i]);  //??????
		else
		{
			if(c[i-1]!=' ')
				printf(" ");
		}
	}
	return 0;
}