int main()
{
	char x[1000];
	int i,changdu,n,t=0;
	scanf("%d",&n);
	while(t<n)
	{
		memset(x,0,sizeof(x));
		scanf("%s",x);
		changdu=strlen(x);
		for(i=0;i<changdu;i++)
		{
			if(x[i]=='A')printf("T");
			else if(x[i]=='T')printf("A");
			else if(x[i]=='C')printf("G");
			else if(x[i]=='G')printf("C");
		}
		printf("\n");
		changdu=i=0;
		t++;
	}
	return 0;
}