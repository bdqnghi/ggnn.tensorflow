int main()
{
	int n,k,i,j,q;
	char s[255];
	scanf("%d\n",&n);
	for(j=0;j<n;j++)
	{
		gets(s);
		k=strlen(s);
		for(i=0;i<k;i++)
		{
			if(s[i]=='A')
			{
				s[i]='T';
			}
			else if(s[i]=='T')
			{
				s[i]='A';
			}
			else if(s[i]=='C')
			{
				s[i]='G';
			}
			else
			{
				s[i]='C';
			}
		}
		for(q=0;q<k-1;q++)
		{
			printf("%c",s[q]);
		}
		printf("%c\n",s[k-1]);
	}
 
}



