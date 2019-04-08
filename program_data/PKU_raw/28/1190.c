void main()
{
  char string[10000],c;
	int i,num,word,a[300];
  num=0;
  word=0;
		 gets(string);
      for (i=0;(c=string[i])!='\0';i++)
	  {
		  if(c==' ') word=0;
	      else {
		        if(word==0)
				{
			      word=1;
			      num=num+1;
			      a[num-1]=0;
				} 
		        a[num-1]=a[num-1]+1;
		

		  }
	  } 
	for (i=0;i<=num-1;i++)
	{printf("%d",a[i]);
	if (i<num-1) printf(",");}
}