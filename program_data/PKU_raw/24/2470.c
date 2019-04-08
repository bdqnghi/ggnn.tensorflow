int main()
{
	char a[5000]={'\0'};
	int lest=0,sest=100,l=0,i,pl,ps;
	gets(a);
	a[strlen(a)]=' ';
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]!=' ')
			l++;
		else
		{
			if(l>lest)
			{
				lest=l;
				pl=i-l;
			}
			if(l<sest)
			{
				sest=l;
				ps=i-l;
			}
			l=0;
		}
	}
	for(i=pl;i<pl+lest;i++)
		printf("%c",a[i]);
	printf("\n");
	for(i=ps;i<ps+sest;i++)
		printf("%c",a[i]);
	return 0;
}