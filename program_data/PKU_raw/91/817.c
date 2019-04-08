
main()
{
      int m,n,i,j;
      char a[100000],b;
      char *p;
      gets(a);
      p=a;
      b=*p;
      for(i=1;*(p+i)!='\0';i++) 
      {
                                *(p+i-1)=*(p+i)+*(p+i-1);
      }
      n=strlen(p);
      *(p+n-1)=b+*(p+n-1);
      puts(p);

}
