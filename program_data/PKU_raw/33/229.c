int main()
{
	char jj[500];
    int l;
	int n;
	int j,i;

    scanf("%d",&n);
	for(j=0;j<=n;j++)
	{

	   gets(jj);
       l=strlen(jj);

	   for(i=0;i<l;i++)
	   {
		  if(jj[i]=='A')
		  {
			 jj[i]='T';
		  } 
		  else if(jj[i]=='T')
		  {
			 jj[i]='A';
		  }
		  else if(jj[i]=='C')
		  {
			 jj[i]='G';
		  }
		  else 
		  {
			 jj[i]='C';
		  }
	   }

	   puts(jj);
	   printf("\n");
	   
	}






	return 0;

}