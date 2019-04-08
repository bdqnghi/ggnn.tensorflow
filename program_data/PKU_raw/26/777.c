int main()
{
	char a[1000];
	char *p=&a[0];
	int i;
	gets(a);
	for(i=0;*(p+i)!='\0';i++)
		{
			if(*(p+i)==' '&&*(p+i-1)==' ')
			{}
			else cout<<*(p+i);
	}
	return 0;
}
