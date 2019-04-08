int main()
{
	char *str1,*p1,str2[100],*p2;
	int n,i;
	str1=(char*)malloc(100*sizeof(char));
	gets(str1);
	p1=str1;
	p2=str2;
	n=strlen(str1);
	for(i=0;i<n-1;i++)
	{
		*(p2+i)=(char)(*(p1+i)+*(p1+i+1));
	}
	*(p2+n-1)=(char)(*(p1+n-1)+*p1);
	for(i=0;i<n;i++)
	{
		printf("%c",*(p2+i));
	}
	return 0;
}
