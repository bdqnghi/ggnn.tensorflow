int main()
{
	int i,a,n;
	char st[256];
	scanf("%d",&n);
	for(a=0;a<n;a++)
	{
		scanf("%s",&st);
		for(i=0;i<256;i++)
		{
			if(st[i]=='A')
				st[i]='T';
			else if(st[i]=='T')
				st[i]='A';
			else if(st[i]=='C')
				st[i]='G';
			else if(st[i]=='G')
				st[i]='C';
		    if(st[i]=='\0')
				break;
		}
		printf("%s",st);
		printf("\n");
	}
	return 0;
}
