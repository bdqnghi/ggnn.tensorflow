void main()
{
	char c[30],*p;
	int num=1;
	gets(c);
	for(p=c;*p!='\0';p++)
	   {
	   if((*p>47)&&(*p<58))
	      {
		  if(num==1)
	      {
		  printf("%c",*p);
		  num=1;
	      }
          else
          {
		  printf("\n%c",*p);
		  num=1;
          }
	      }
       else
          num=0;
	   }
}