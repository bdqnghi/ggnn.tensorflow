int main()
{
	char c[50],*p=c;
	int a[50],*q=a,t=0,i;
	gets(c);
	for(;*p!='\0';p++)
	{
		if(*p>='0'&&*p<='9')
		{
			*q=(*p)-'0';
			p++;
			while(*p>='0'&&*p<='9')
				*q=(*q)*10+(*(p++)-'0');
			t++;
			q++;
		}
	}
	for(i=1,q=a;i<=t;i++,q++)
		printf("%d\n",*q);
	return 0;
}
