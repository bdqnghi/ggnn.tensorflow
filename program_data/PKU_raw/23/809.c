int main()
{
	char *str,*p;
	int n,m=0,i,j;//?m??????????//
	str=(char*)malloc(100*sizeof(char));
	p=(char*)malloc(100*sizeof(char));
	gets(str);
	n=strlen(str);
	for(i=n-1;i>=0;i--)
	{
		if(*(str+i)!=' ')
			m++;
		else if(*(str+i)==' ')
		{
			for(j=1;j<=m;j++)
			{
				printf("%c",*(str+i+j));
			}
			printf(" ");
			m=0;
		}
		if(i==0)
		{
			for(j=0;j<m;j++)
			{
				printf("%c",*(str+j));
			}
		}
	}
	return 0;
}
