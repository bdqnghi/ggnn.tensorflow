main()
{
  char x[100],y[100]={'\0'};
  int  i,a,b,c,d;
  scanf("%s",x);
    if(x[1]=='\0')
    y[0]='0';
   c=x[0]-'0';
  for(i=1;x[i]!='\0';i++)
  {
      a=x[i]-'0';
      b=c*10+a;
      if(b>=13)
      {
          c=b%13;
          d=b/13;
          y[i-1]='0'+d;       
      }   
      else
      {    
           c=b;
           y[i-1]='0';
      }             
  } 
  if(y[0]=='0' && x[1]!='\0' && x[2]!='\0')
  {
    for(i=0;y[i]!='\0';i++)
    y[i]=y[i+1];             
  }  
  printf("%s\n%d",y,c); 

}
