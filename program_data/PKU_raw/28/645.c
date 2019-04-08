void main()
{
 int a=0,i,x;
 char c[10000];
 gets(c);
 for(i=0;c[i]!='\0';i++)
 {
  if(c[i]!=' '){a=a+1;x=1;}
  else 
  {
   if(x==1)
	  { if(c[i]==' ')
   {printf("%d,",a);x=0;};
	   a=0;}
      }
}printf("%d",a);
}
