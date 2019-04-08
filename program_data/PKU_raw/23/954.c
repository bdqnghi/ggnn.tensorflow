void main()
{
	char str1[100];
	int n,i,j,a1,a2;
	gets(str1);
	n=strlen(str1);
    a1=n-1;
	for(i=a1;i>=0;i--)
	{if(str1[i]==' ')
	{   a2=i+1;
		for(j=a2;j<=a1;j++)
		printf("%c",str1[j]);
		printf(" ");
		a1=i-1;}
	}
	for(i=0;i<=a1;i++)
	printf("%c",str1[i]);
}