
main()
{
char **pp;

 int n,h,m=100,i,x,y,a=0;
 scanf ("%d",&h);
 n=2*h;
 pp=(char **)malloc(n*sizeof(char *));
 
 for (i=0;i<n;i++)
  pp[i]=(char*)malloc(m*sizeof(char));
 for (i=0;i<h;i++)
   {
    scanf ("%s",pp[2*i]);x=strlen (pp[2*i]);
	scanf ("%s",pp[2*i+1]);y=strlen (pp[2*i+1]);
     for (a=x-1;a>x-y-1;a--)
	 {
	  pp[2*i][a]= pp[2*i][a]-pp[2*i+1][a-x+y]+'0';
	  if (  pp[2*i][a]<'0') 
	  {pp[2*i][a]= pp[2*i][a]+10; pp[2*i][a-1]= pp[2*i][a-1]-1;}

	 }

   }

 printf ("\n");
 for (i=0;i<h;i++)
   printf ("%s\n",pp[2*i]);
 for (i=0;i<n;i++)
   free (pp[i]);
   free (pp);
}
