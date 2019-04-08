int main()
{
	char c[100];
	int i,t;
	for(i=0;i<100;i++)
	{scanf("%c",&c[i]);
	if(c[i-1]==' '&&c[i]==' ') i--;
	if(c[i]=='\n') break;}
	for(t=0;t<i;t++)
		printf("%c",c[t]);
	return 0;
}