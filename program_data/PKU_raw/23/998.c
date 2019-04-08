void main()
{
  char mystr[100],c;
  int a[100],i,j,k;
  gets(mystr); 
  for(i=0,j=1;i<strlen(mystr);i++)
  {
     if(mystr[i]==' ')
     {
		 a[j]=i;
         j++;
	 }
  }
  a[0]=-1;
  a[j]=strlen(mystr); 
  for(k=strlen(mystr)-1;k>=0;k--)
  {

      if(k==a[j-1])
	   {
		   printf(" ");
		   j=j-1;
	   }
	  else
		   
	  {c=mystr[a[j]+a[j-1]-k];   
	  printf("%c",c);}
       	 
     
  }

}

