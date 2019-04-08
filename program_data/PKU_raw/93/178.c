void main()
{
  int k;
  scanf("%d",&k);
  int i;
  int a=0,b=0,c=0;
  
  if(k%3==0)
  {printf("3");if(k%5==0)printf(" 5");if(k%7==0)printf(" 7");}
  else if(k%5==0)
  {printf("5");if(k%7==0)printf(" 7");}
  else if(k%7==0)printf("7");else printf("n");
  

  
  
}