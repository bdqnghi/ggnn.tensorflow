
int main()
{                                                                                                            
	int n,i,j,sum=0,len;
	char  a[260];
	scanf("%d",&n);

	  for(j=0;j<n;j++)
	 {
		  len=0;
      scanf("%s",&a);
       len=strlen(a);
	for(i=0;i<len;i++)
	{

		if(i!=len-1)
		{
	  if (a[i]=='A')
	  {
        printf("T");
	  }
	  else if(a[i]=='T')
	  {
        printf("A");
	  }
	  else if(a[i]=='G')
	  {
        printf("C");

	  }
      else if(a[i]=='C')
	  {
        printf("G");
	  }
		}
		else
			{
	  if (a[i]=='A')
	  {
        printf("T\n");
	  }
	  else if(a[i]=='T')
	  {
        printf("A\n");
	  }
	  else if(a[i]=='G')
	  {
        printf("C\n");

	  }
      else if(a[i]=='C')
	  {
        printf("G\n");
	  }
		}
    }
	  }
	
	return 0;
}