void main()
{
	char c[10],s[4];
	int k,x;
	char p;
    while(scanf("%s %s",c,s)!=EOF)
	{
	   for(k=0,p='0';k<10&&(c[k])!='\0';k++)
	   {
   	       if(p<c[k])
		   {
	     		p=c[k];
	  			x=k;
		   }
	   }
	   for(k=0;k<=x;k++)
	   {
		   printf("%c",c[k]);
	   }
	   for(k=0;k<4&&(s[k]!='\0');k++)
	   {
		   printf("%c",s[k]);
	   }
	   for(k=x+1;k<10&&(c[k]!='\0');k++)
	   {
		   printf("%c",c[k]);
	   }
	   printf("\n");
	}
}