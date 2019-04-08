int main()
{
	char s[100000],*p;
	gets(s);
	p=s;
	int num[300]={0},i=0,k=0,m=0;
	while(*p!='\0')
	{
		if(*p!=' ')
		{
			num[i]=num[i]+1;
			k=1;
		}
		else if(*p==' '&&k==1)
		{
			i=i+1;
			k=0;
			m=i;
		}
		p=p+1;
	}
	for(i=0;i<m;i++)
	    printf("%d,",num[i]);
	printf("%d",num[m]);
return 0;
}