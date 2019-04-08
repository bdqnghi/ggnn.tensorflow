int main()
{
	char a[200],b[200];
	gets(a);
	char *p,*q;
	p=a;
	q=b;
	*q=*p;
	q=b+1;
	for(p=a+1;*p!='\0';p++)
	{
		if(*(p)==' '&&*(p-1)==' ')
			continue;
		*q=*p;
		q++;
	}
	
	*q='\0';
	cout<<b;
		return 0;
}