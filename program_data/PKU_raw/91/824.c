void main()
{
	char str[100],str1[100],*p,*p1,*p2;
	gets(str);
	p=str;
	p2=&str[0];
	p1=str1;
	int i,n;
	i=0;
	for(;*p!='\0';p++)
		i++;
	n=i;
	p=str;
	for(i=0;i<n-1;i++)
	{
		*p1=*p+*(p+1);
		p++;
		p1++;
	}
	*p1=*p2+*p;
	p1=str1;
	for(i=0;i<n;i++)
	{printf("%c",*p1);p1++;}
}
	
