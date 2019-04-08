int su(char m[])
{
	int n,k;
	n=strlen(m);
	if (m[n-1]=='r') k=1;
	if (m[n-1]=='y') k=2;
	if (m[n-1]=='g') k=3;
	return(k);
}


void main()
{
	int n;
	scanf("%d\n",&n);
	char str[100][100];
	int i;
	for(i=0;i<=n-1;i++)
	gets(str[i]);

	int j;
	int m;
	for(j=0;j<=n-1;j++)
	{m=strlen(str[j]);
	//printf("%d\n",m);
	//int c;
	//c=su(str[j]);
	//printf("%d\n",c);
	if(su(str[j])==3) str[j][m-3]='\0';
	else str[j][m-2]='\0';
	puts(str[j]);
	printf("\n");}
	

}	


