int main()
{
	char str1[101],str2[101],*p1=str1,*p2=str2;
	int i=1;
	gets(str1);
	while(*(p1+i))
	{
		*(p2+i-1)=*(p1+i)+*(p1+i-1);
		i++;
	}
	*(p2+i-1)=*(p1+0)+*(p1+i-1);
	*(p2+i)='\0';
	printf("%s",p2);
	return 0;

}