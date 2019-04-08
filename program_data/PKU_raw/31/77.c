
void myPrint()
{
	char str[100];
	gets(str);
	if(strcmp(str,"end"))
		myPrint();
	else
		return;
	puts(str);
}

int main()
{
	myPrint();

	return 0;
}
