void main()
{
	int i,m,n,sum=0;
	char a[100];
	gets(a);
	for(i=0;*(a+i)!='\0';i++)
	{	
		if(*(a+i)==' '&&*(a+i+1)!=' ')printf("%c",*(a+i));
		if(*(a+i)!=' ')printf("%c",*(a+i));
	}
}
