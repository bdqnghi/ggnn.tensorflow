

int main()
{
	char str1[101],str2[101];
	gets(str1);
	char *p1,*p2;
	for(p1=str1,p2=str2;*p1!='\0';p1++)
	{
		if(*p1!=' ')
		{
			*p2=*p1;
			p2++;
		}
		if((*p1==' ')&&(*(p1+1)!=' '))
		{
			*p2=' ';p2++;
		}
	}
	*p2='\0';
	cout<<str2<<endl;
	return 0;
}