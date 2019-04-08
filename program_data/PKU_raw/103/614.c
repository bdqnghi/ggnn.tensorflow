main ()
{
  char a[10000];
  gets (a);
  int i;
  for (i=0;a[i]!='\0';i++)
  {
    if (a[i]<='z'&&a[i]>='a')
    {
	  a[i]=a[i]+('A'-'a');	
	}
  }
    int count =1;
     for (i=0;a[i]!='\0';i++)
     {
       if (a[i+1]==a[i])
      {
			 count++;
	  }
	   else
	   {
			printf ("(%c,%d)",a[i],count);
			count=1;
	   }
	 }
  	
	
	
	
	
	
	
	
	
}