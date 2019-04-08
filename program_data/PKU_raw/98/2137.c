
main()
{	char words[500][40];
	int n,i,j,numwords[500]={0},num=0;
    scanf("%d",&n);
	for(i=0;i<n;i++)
  	{scanf("%s",words[i]);}
	
	for(i=0;i<n;i++)
	{	for(j=0;words[i][j]!='\0';j++)
 		{	numwords[i]++;
		 							  }
	 						
					 }
					 
	for(i=0;i<n-1;i++)
	{	if((numwords[i]+num)>80)
		{	printf("\n");
			printf("%s ",words[i]);
			num=numwords[i]+1;
		 						}					 
	 	else if((numwords[i+1]+num+numwords[i]+1)>80)
	 	{	printf("%s",words[i]);
	 		num=num+numwords[i]+1;
		 						}			
		else
		{	printf("%s ",words[i]);
	 		num=num+numwords[i]+1;
		 						}						 
					 }
  	  printf("%s",words[n-1]); 
		 
			 }

