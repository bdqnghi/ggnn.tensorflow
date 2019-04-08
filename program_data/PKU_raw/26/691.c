int main()
{
int i,j;
char str[101];
gets(str);
for(i=0;i<strlen(str);i++)
{
	if(str[i]==' ')
	{
		if(str[i+1]==' ')
		{
			for(j=i;j<=strlen(str);j++)
			{str[j]=str[j+1];
			}
			i--;
		}

	}
	
}
printf("%s",str);
}