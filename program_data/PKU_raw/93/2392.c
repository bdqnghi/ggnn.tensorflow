void main ()
{
int n,t=0;
scanf ("%d",&n);
if (n%3==0)
  {
   t=1;
   printf ("3");
  }
if (n%5==0)
  {
   if (t==1)
   printf (" ");
    t=1;
   printf ("5");
  }
if (n%7==0)
  {
   if (t==1)
   printf (" ");
    t=1;
   printf ("7");
  }
if (t==0)
  printf ("n");   
}