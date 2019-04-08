void main()
{
	char a[100][100];char (*ipa)[100]=a;
	int i; char c='\n';
	for(i=0;;i++)
	{
		scanf("%s",*ipa++);
		if(c==getchar()) 
			break;
	}
	ipa--;
	for(;i>=1;i--)
	{
		printf("%s ",*ipa--);
	}
	printf("%s",*ipa);

}