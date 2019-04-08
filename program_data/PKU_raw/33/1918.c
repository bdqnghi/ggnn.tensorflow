int main(int argc, char* argv[])
{
    int n,len=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		char s[256];
		scanf("%s",s);
        len=strlen(s);
		for(int j=0;j<len;j++)
		{
			if(s[j]=='A')  printf("T");
            if(s[j]=='T')  printf("A");
			if(s[j]=='C')  printf("G");
			if(s[j]=='G')  printf("C");
		}
		printf("\n");
	}
	return 0;
}