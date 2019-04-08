void main()
{
  int p=0;
  char a='a';

  for(;a!='\n';) 
  {
	  scanf("%c",&a);
	  if(a!=' ')
	  {
		  printf("%c",a);
		  p=0;
	  }
	  else if(a==' '&&p==0)
	  {
		  p=1;
		  printf("%c",a);
	  }
	  else if(a==' '&&p==1) continue;
  }

}