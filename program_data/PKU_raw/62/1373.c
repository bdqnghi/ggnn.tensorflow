void main()
{
	char a;
	int i=0;
	for(;a!='\n';)
	{
	a=getchar();	
	if(a!=' ')
	{printf("%c",a);i=0;}
	else if((a==' ')&&(i==0))
	{i++;printf("%c",a);continue;}
	else continue;
	}
}