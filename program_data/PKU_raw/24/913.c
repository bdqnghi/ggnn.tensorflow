
int main()
{
	char str[50*100], word[50][100];
	int i,j,k;
	char max[100],min[100];

	gets(str);

	for(i=0,k=0,j=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
		{
			word[k][j]='\0';
			k++;
			j=0;
			continue;
		}
		word[k][j]=str[i];
		j++;
	}
	word[k][j]='\0';

	strcpy(max,word[0]);
	strcpy(min,word[0]);

	for(i=0;i<=k;i++)
	{
		if((int)strlen(max)<(int)strlen(word[i]))
		{
			strcpy(max,word[i]);
		}
		if((int)strlen(min)>(int)strlen(word[i]))
		{
			strcpy(min,word[i]);
		}
	}

	printf("%s\n",max);
	printf("%s\n",min);

	return 0;
}