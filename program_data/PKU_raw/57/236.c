
void delete3(char t[],int length);
void delete2(char t[],int length);

void main()
{
	char word[50][30];
	int n;
	int i,j;
	int length;

	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%s",word[i]);
	}
	for (i=0;i<n;i++)
	{
		length=strlen(word[i]);
		if (word[i][length-1]=='g')
			delete3(word[i],length);
		else
			delete2(word[i],length);
		printf("%s",word[i]);
		if (i!=n-1)
			printf("\n");
	}
}


void delete3(char t[],int length)
{
	t[length-3]='\0';
}

void delete2(char t[],int length)
{
	t[length-2]='\0';
}