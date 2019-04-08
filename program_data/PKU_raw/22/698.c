int main()
{
  int a,b,t;
  char c;
  a=0;
  b=0;
  c=',';
  while(c==',')
  { 
	  scanf("%d",&t);
	  if(t>b)
	  { if(t>a)
	     {b=a;
	     a=t;
	       } 
	  else if(a==t){}
	  else b=t;
	  }
	  

	  
	  
		c=getchar();  
	
	  
  }
     if(a==b||b==0)
		 printf("No");
	 else printf("%d",b);
	 return 0;
}
