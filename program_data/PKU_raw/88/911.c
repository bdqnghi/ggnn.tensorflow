int main()
{
 char string[30];
 gets(string);
 char *p=string;
 int clen,nolen=0;
 clen=strlen(string);
 for(int i=0;i<clen;i++)
 {
	 if(*(p+i)<'0'||*(p+i)>'9')
	 {
		 int ilen=0;
      if(*(p+i-1)<'0'||*(p+i-1)>'9')
	  { nolen++;ilen++;int jj=1;
	  while(1)
	  {
	   if(*(p+jj+i)<'0'||*(p+jj+i)>'9')
	   {nolen++;ilen++;jj++;}
	   else break;
	  }
	   for(int j=i;j<clen-nolen;j++)
	   {
	    *(p+j)=*(p+j+ilen);
	   }
	  }
	  else *(p+i)='\n';
	  }
 }
 string[clen-nolen]='\0';
 for(int j=0;j<clen;j++)
 {
  if((string[j]<'0'||string[j]>'9')&&(string[j]!='\n'))
  {
   string[j]='\0';break;
  }
 }
 cout<<string<<endl;
 return 0;
}