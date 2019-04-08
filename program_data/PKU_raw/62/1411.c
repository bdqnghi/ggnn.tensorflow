void main()
{
	char *p;
	int i,j,k,l;
	p=(char*)malloc(50*sizeof(char));
	gets(p);
	l=strlen(p);
	for(i=0;i<l;i++)
	{
		if(*(p+i)==' ')
		{   
		  	printf("%c",*(p+i)); 
		   	for(k=i+1;k<l;k++)
            {
			   if(*(p+k)!=' ')  {i=k-1;break;}
            }
		} 
		
 	    else printf("%c",*(p+i));
       
  	 }
        
    free(p);
}
				
     