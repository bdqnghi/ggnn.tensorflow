void main()
{
	int a;
	int i=0;
	for(;a!='\n';)
	{
	a=getchar();	
	if(a>=48 && a<=57)
	{printf("%c",a);i=0;}
	else if((a<48 || a>57)&&(i==0))
	{i++;printf("\n");continue;}
	else continue;
	}
}
