void main()
{
	char a[10000];
	int i,j=1,n=0,l,d=0;
	gets(a);
	l=strlen(a);
	for(i=0;i<l;i++)
	{
		if(a[i]!=' ')
		{
			if(n!=0)
			{
				d++;
				n=0;
			}
			else 
				d++;
		}
		else
			if(n==0)
			{
				printf("%d,",d);
				n++;
				d=0;
			}
	}
	printf("%d",d);
}