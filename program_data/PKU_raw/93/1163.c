int main()
{int a,b,c,d;
scanf("%d",&d);
a=d%3;
b=d%5;
c=d%7;
if (!a)
{ if (!b) 
{    if (!c)
         printf("3 5 7");
      else
		  printf("3 5");}
   else
   { if (!c)
      printf ("3 7");
   else 
	   printf("3");}} 
else
{  if (!b) 
   {  if (!c)
        printf("5 7");
       else 
		   printf("5");}
   else
   {  if (!c) 
        printf("7");
       else
		   printf("n");}}
return 0;
}