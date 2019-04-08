int main()
{
	int len,i;
	char a[100],b[100],*p,*q;
	p=a;
	q=b;
	gets(a);
	len=strlen(a);
	for(i=0;i<len;i++)
	{
		if(i!=len-1)
		{
			*(q+i)=*(p+i)+*(p+i+1);
		}
		else
		{
			*(q+i)=*(p+i)+*p;
		}
	}
	for(i=0;i<len;i++)
	{
		printf("%c",*(q+i));
	}
	return 0;
}
