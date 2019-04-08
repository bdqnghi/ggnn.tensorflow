void main()
{
  int i;
  char str1[100],str2[100];
  gets(str1);
  gets(str2);
  for(i=0;;i++)
  { 
	  if(str1[i]=='\0')
		  break;
	  if(str1[i]!='\0')
   { 
    if(str1[i]<=122&&str1[i]>=97)
    {
     str1[i]=str1[i]-32;
    }
   }  
   }
  for(i=0;;i++)
  {
	  if(str2[i]=='\0')
		  break;
	  if(str2[i]!='\0')
   {
    if(str2[i]<=122&&str2[i]>=97)
    {
     str2[i]=str2[i]-32;
     }
    }
   }
  if(strcmp(str1,str2)==0)
  { printf("=");
  }
  else if(strcmp(str1,str2)>0)
	  printf(">");
  else
	  printf("<");
}
