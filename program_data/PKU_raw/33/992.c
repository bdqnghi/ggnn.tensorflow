int main()
{
	int n,i,j;
	scanf("%d",&n);
	char s[256];
	for(i=0;i<n;i++)
	{
	   scanf("%s",s);

	   for(j=0;j<strlen(s);j++)
	   {
		   if(j<strlen(s)-1)
		   {
		      if(s[j]=='A') printf("T");
		      if(s[j]=='T') printf("A");
		      if(s[j]=='C') printf("G");
		      if(s[j]=='G') printf("C");
		   }
		   else
		   {
			  if(s[j]=='A') printf("T\n");
		      if(s[j]=='T') printf("A\n");
		      if(s[j]=='C') printf("G\n");
		      if(s[j]=='G') printf("C\n");
		   }

	   }

	}
	return 0;
}
