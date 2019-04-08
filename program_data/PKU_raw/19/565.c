/*

main()
{
  int n1,n2,n3,k,i;
  char s[150],a[150],b[150];
  char *p1=s,*p2=a,*p;

  gets(s);
  gets(a);
  gets(b);

  n1=strlen(s);
  n2=strlen(a);
  n3=strlen(b);

  for(p1=s;p1<s+n1;p1++,p2++)
  {
    p=p1;
	p2=a;
	for(k=0;*p==*p2;p++,p2++)
	{
	  k++;
	}
	
	if(k==n2) 
	{
		for(i=0;i<n3;i++)  printf("%c",b[i]);
		p1=p;
		p2=a;
	}
	printf("%c",*p1);
	
  }

 
   
}
*/
/**/


main()
{
  int k=0,i=0;
  char a[150],b[150];
  char d[101][50];
  char c;

  
  

  
  for(k=0,i=0;(c=getchar())!='\n';)
  {
    if(c==' ') 
	{
		d[k][i]='\0';
		k++;
		i=0;
	}
	else 
	{
	  d[k][i]=c;
	  i++;
	}
  }
  d[k][i]='\0';
  k++;

  gets(a);
  gets(b);

   for(i=0;i<k-1;i++)
   {
     if(strcmp(d[i],a)!=0)  printf("%s ",d[i]);
	 else printf("%s ",b);
		 
   }
   if(strcmp(d[i],a)!=0)  printf("%s",d[i]);
	 else printf("%s",b);
   
}
