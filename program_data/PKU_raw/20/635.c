void main()
{
	char s1[20],s2[10],k[20];
	int i,j,n,m,max;
	while (scanf("%s%s",s1,s2)!=EOF)
	{
	  m=strlen(s1);
	  for (i=0;i<=m-1;i++)
	  {
	    k[i]=s1[i]; 
	  }
      for (i=1;i<=10;i++)
	  { 
        for (j=0;j<=m-2;j++)
		{
          if (k[j]<k[j+1])		
		  {
		    n=k[j];
			k[j]=k[j+1];
            k[j+1]=n; 
		  }
		}
	  }
      for (i=0;i<=m-1;i++)
	  {
	    if (s1[i]==k[0])
		{
		 max=i;
		 break;
		}	  
	  }
      for (i=0;i<=max;i++)
	  {
	    printf("%c",s1[i]);
	  }
   for (i=0;i<=2;i++)
   {
     printf("%c",s2[i]);
   }
      for (i=max+1;i<=m-1;i++)
	  {
	    printf("%c",s1[i]);
	  }
  printf("\n");
	
	}

 }