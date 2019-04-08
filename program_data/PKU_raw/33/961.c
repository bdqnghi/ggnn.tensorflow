int main()
{
	int j,i,len,n;
	char a[256];
	char b[256];
	scanf("%d",&n);
	for(j=0;j<n;j++)
	{
	    scanf("%s",a);
	    len=strlen(a);
	   for(i=0;i<len;i++)
	   {
		 switch(a[i])
		   {
		 case 'A':b[i]='T';
			break;
		 case 'T':b[i]='A';
			break;
		 case 'G':b[i]='C';
			break;
		 case 'C':b[i]='G';
			break;
		   }
	    }
	   for(i=0;i<len;i++)
	      printf("%c",b[i]);
	   printf("\n");
 	}
	
	return 0;
}