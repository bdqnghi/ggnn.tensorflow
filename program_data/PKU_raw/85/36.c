int main()
{
  int n;
  int i;
  int j;
  int l;
  
  scanf ("%d",&n);
  char c[20];
  for (i=1;i<=n;i++)
  { 
	  int count =1 ;
	  scanf ("%s",c);
	  l = strlen(c) ;


	  if(c[0]<=64  )
		  count = 0;
	  if (c[0]>=123)
		  count =0;
	  if (c[0]>=91 && c[0]<=96 && c[0]!=95)
		  count = 0;
	  for (j=1;j<l;j++)
	  {
		  if (c[j]<=47)
			  count = 0;
       if (c[j]>=58&&c[j]<=64)
			  count = 0;
      if (c[j]>=91&&c[j]<=96)
			  count = 0;
	   if (c[j]>=123&&c[j]<=127)
		   count = 0;
		  

	  }
	   if (count==0)   printf ("no\n");
  if (count==1)   printf ("yes\n");

  }
 
  return 0;
 
}