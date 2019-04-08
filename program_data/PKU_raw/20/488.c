char string[13];
void f(char str[],char substr[]);
void main()
{
int i;	
char str[10],substr[4];
	while (scanf("%s%s",str,substr)!=EOF)
	{
		f(str,substr);
for(i=0;i<strlen(str)+3;i=i+1)
printf("%c",string[i]);
printf("\n");
	}
}
void f(char str[10],char substr[4])
{
	int i,j,k,t;
	char max;
	max=str[0];
k=0;
	t=strlen(str);
	for(i=1;i<t;i=i+1)
	{
		if(str[i]>max)
		{
			max=str[i];
			k=i;
		}
	}
	for(i=0;i<=k;i=i+1)
	{
		string[i]=str[i];
	}
	j=0;
	for(i=k+1;i<=k+3;i=i+1)
	{
		string[i]=substr[j];
		j=j+1;
	}
	if(k<t-1)
	{
		j=k+1;
		for(i=k+4;i<t+3;i=i+1)
		{
			string[i]=str[j];
			j=j+1;
		}
	}
}
