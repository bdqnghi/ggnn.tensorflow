void main()
{
     char ini[101],former[101],latter[101],*p,*q=ini;
	 gets(ini);
	 gets(former);
	 gets(latter);
	 for(p=ini;;p++)
	 	 if(*p==' ')
		 {
			 *p='\0';
			 if(strcmp(q,former)==0) printf("%s ",latter);
			 else printf("%s ",q);
			 q=p+1;
		 }
		 else if(*p=='\0')
		 {
			 if(strcmp(q,former)==0) printf("%s\n",latter);
			 else printf("%s\n",q);
			 break;
		 }
	 
}
		 
		 


