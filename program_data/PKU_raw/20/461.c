int find(char str[]);
void link(char str[],char substr[], int x);
void main()
{
	char str[20],substr[4];
	int i;
	while(scanf("%s%s",&str,&substr)!=EOF)
	{
		i=find(str);
		link(str, substr, i);
	}
}
int find(char str[])
{
	int max,j,k;
	max=str[0]; k=0;
	for(j=0;str[j]!='\0';j++)
	{
		if(str[j]>max)
		{
			max=str[j];
			k=j;
		}
	}
	return k;
}
void link(char str[],char substr[],int i)
{
	int j;
	int len;
	len=strlen(str);
	for(j=len;j>i;j--)
		str[j+3]=str[j];
	str[i+1]=substr[0];
	str[i+2]=substr[1];
	str[i+3]=substr[2];
	printf("%s\n",str);
}
	

