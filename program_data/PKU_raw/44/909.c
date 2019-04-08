void main()
{
	int f(char str[10]);
	char string[6][10];
	int i;
	for(i=0;i<6;i++) gets(string[i]);
	for(i=0;i<6;i++) printf("%d\n",f(string[i]));
}
int f(char str[10])
{
	int j,m,e,k,b;
	b=0; m=0;
	for(j=0;str[j]!='\0';j++) b=j;
			
  	
	if(str[0]=='-')
	   {
		
		  for(j=b;j>0;j--)
		  {
			e=1;
			for(k=1;k<j;k++)
				e=e*10;
			m=m+(str[j]-48)*e;
		  }
	   
	    if(m==0)	return(0);
	    else return(-m);
	   }
	 
	else 
	{
	    
		for(j=b;j>=0;j--)
		{
			e=1;
			for(k=0;k<j;k++)
				e=e*10;
			m=m+(str[j]-48)*e;
		}
      return(m);
        
	 }

   
}
