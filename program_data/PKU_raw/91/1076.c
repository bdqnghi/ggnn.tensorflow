int main()
{
	char str1[110],str2[110];
	char *p,*q;
	int i;
	p=str1;
	q=str2;
	gets(p);
	for(i=0;;i++)
	{
		if(*(p+i+1)=='\0')
		{
			*(q+i)=*(p+i)+*p;
			*(q+i+1)='\0';
			break;
		}else{
			*(q+i)=*(p+i)+*(p+i+1);
		}
	}
	q=str2;
	for(i=0;;i++)
	{
		if(*(q+i)!='\0')
		{
			printf("%c",*(q+i));
		}else{
			break;
		}
	}
	printf("\n");
	return 0;
}
