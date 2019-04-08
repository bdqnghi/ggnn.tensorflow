int main()
{
	char str[80],*p,*q,t;
	scanf("%s", str);
	for(p=str,q=p+strlen(str)-1;p<q;p++,q--)
	{
		t=*p;
		*p=*q;
		*q=t;
	}
	printf("%s", str);
	return 0;
}