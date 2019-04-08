void main()
{
   char a[301];
   int b[130],c=0;
   int i;
   gets(a);
   for(i=65;i<=122;i++) b[i]=0;
   for(i=0;a[i]!=0;i++)
   {
     if(a[i]>=65&&a[i]<=90) b[a[i]]=b[a[i]]+1;
	 if(a[i]>=97&&a[i]<=122) b[a[i]]=b[a[i]]+1;
   }
   for(i=65;i<=122;i++)
   {
     c=c+b[i];
   }
   if(c==0) printf("No");
   if(c)
   {
       for(i=65;i<=122;i++)
	   {
	      if(b[i])
	      printf("%c=%d\n",i,b[i]);
	   }
   
   
   }
}
