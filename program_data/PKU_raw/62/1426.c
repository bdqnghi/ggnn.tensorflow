void main()
{
   char *s;
   int i,j=0,m,n,k=0;
   
   s=(char*)malloc(1000*sizeof(char));
   
   for(i=0;i<1000;i++)
	   scanf("%c",s+i);
   for(i=0;*(s+i)!='\0';i++)
   {
	   if(*(s+i)==' ')
	   {
		   for(j=i+1;*(s+j)==' ';j++)
		   {
			   for(k=j;*(s+k)!='\0';k++)
			   *(s+k-1)=*(s+k);
			   j--;
		   }
			  
	   }
   }
       for(i=0;*(s+i)!='\0';i++)
	   printf("%c",*(s+i));
  
 }

