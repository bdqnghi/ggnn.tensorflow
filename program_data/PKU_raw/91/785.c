void main()
{
	char str[200];
	char  str1[200];
	char *p,*r;
	char *q;
	int m,i;
	gets(str);
	p=str;
	m=strlen(str);
	q=str1;
	for(i=0;i<m-1;i++)
	{
       r=p+1;
	   *q=*p+*r;
	   p++;
	   q++;
	  }
*q=*p+*str;
q=str1;
for(i=0;i<m;i++,q++)
printf("%c",*q);
}



