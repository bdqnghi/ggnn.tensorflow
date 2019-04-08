
int main()
{
	char s[100], str1[100], str2[100], a[100][100];
	gets(s);
	int len=strlen(s);
    gets(str1);
    gets(str2);
	int lenth=strlen(str2);
	int i, j, p;
	for(i=0,j=0,p=0;j<len;j++)
	{
		a[i][p++]=s[j];
		if(s[j+1]==' '){j=j+1;a[i][p]='\0';i=i+1;p=0;}
	}
    a[i][p]='\0';
	int num=i;
	int judge=0;
	for(i=0;i<num+1;i++)
	{
		if(strcmp(a[i], str1)==0)
		{
			for(j=0;j<lenth;j++)
			{
				a[i][j]=str2[j];
			}
			a[i][lenth]='\0';
		    judge=1; 
		}
	}
   
	if(judge==0)printf("%s\n", s);
	else
	{
		printf("%s", a[0]);
		for(i=1;i<num+1;i++)
		{
			printf(" %s", a[i]);
		}
		printf("\n");
	}
	return 0;
}
