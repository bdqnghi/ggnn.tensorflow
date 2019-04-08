int main()
{
	char str[1000],*p;
	int n,i,j,k=0;
	gets(str);
	p=str;
	n=strlen(str);
	for(i=0;i<n;i++)
		if(*(p+i)==' ')
		{j=i;break;}
	printf("%d",i);
	if(i<n)
	{
	for(i=j+1;i<=n;i++)
	{
		if(*(p+i)!=' '&&*(p+i)!='\0') k=k+1;
		else 
		{if((*(p+i)==' '||*(p+i)=='\0')&&*(p+i-1)!=' ') printf(",%d",k);
		k=0;}
	}
	}
}