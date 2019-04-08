int main()
{
    char a[1000];
	int i=0;
	gets(a);
	while(a[i]!='\0')
	{
		if(a[i]!=' ')printf("%c", a[i]);
		else if(a[i+1]!=' ')printf(" ");
		i++;
}
	return 0;
}
