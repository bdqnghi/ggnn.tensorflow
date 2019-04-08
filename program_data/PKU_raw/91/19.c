int main()
{
	char a[102],*p1=a,b[102]={'\0'},*p2=b;
	int i,j,k,l;
	gets(a);
	l=strlen(a);
	for(i=0;i<l-1;i++)
	{
		*(p2+i)=*(p1+i)+*(p1+i+1);
	}
	*(p2+l-1)=*(p1+l-1)+*p1;
	printf("%s",b);
}