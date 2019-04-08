int main()
{
	char zfc[100],qin[100];
	int n,ascii[100],i,a;
	gets(zfc);
	n=strlen(zfc);
	
	for(i=0;i<n;i++)
	{
        ascii[i]=zfc[i];
	}

	a=ascii[0]+ascii[n-1];

	for(i=0;i<n-1;i++)
	{
		ascii[i]=ascii[i]+ascii[i+1];
	}

	ascii[n-1]=a;

	for(i=0;i<n;i++)
	{
		qin[i]=ascii[i];
	}

	for(i=0;i<n;i++)
	{
		printf("%c",qin[i]);
	}
	return 0;
}


