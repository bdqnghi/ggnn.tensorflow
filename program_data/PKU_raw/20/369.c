main()
{
  char d,a[11],b[4],c[14];
  int n,i,f;
  while(scanf("%s %s",a,b)!=EOF)
  {
	 n=strlen(a);
     d=a[0];
	 f=0;
     for(i=0;i<n;i++)
	 { if(a[i]>d) 
	  {
	    d=a[i];
        f=i;
	 }
	 }
    c[0]='\0';
	strncat(c,a,f+1);
	strcat(c,b);
	strcat(c,a+f+1);
	puts(c);
  }
}