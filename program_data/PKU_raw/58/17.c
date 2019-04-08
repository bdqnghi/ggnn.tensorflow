
int main()
{
	int n,i,flag;
	char str[81], *p;
	
	scanf("%d\n",&n);
    
	i=0;
	while (i<n)
	{
		gets(str);
		p=str;
		flag=0;
		if (((*p>=65)&&(*p<=90)) || ((*p>=97)&&(*p<=122)) || (*p=='_'))
			flag=1;
		else
			flag=0;
		p++;
		while ((*p!='\0')&&(flag==1))
		{
			if (((*p>=48)&&(*p<=57))||((*p>=65)&&(*p<=90))||((*p>=97)&&(*p<=122))|| (*p=='_')) flag=1;
			else flag=0;	
			p++;
		}
		printf("%d\n",flag);
		i++;
	
	}
	return(0);
}
		
			


