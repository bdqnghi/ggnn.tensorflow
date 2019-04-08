int main()
{
	char str[1000],*p;
	p=str;
	int n,i,k=0;
	gets(str);
	n=strlen(str);
	str[n]=' ';
	for(i=0;i<=n;i++)
	{if(*(p+i)!=' ') k+=1;
	else {if(i<n&&k!=0) printf("%d,",k);if(i==n&&k!=0) printf("%d",k);k=0;}}
	return 0;
}