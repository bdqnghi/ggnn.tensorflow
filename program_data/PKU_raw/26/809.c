






int main()
{

  char s[101];
  char *p=s;
  



  cin.getline(s,sizeof(s));
  cout<<*p;
  p++;
  while(*p!='\0')
  {
	  if(*p!=32 || *p==32 && *(p-1)!=32)
	  {
	  cout<<*p;
	  }
	  p++;
  }
  



  





 


 

 

  
 


  





  

 
 return 0;

}





