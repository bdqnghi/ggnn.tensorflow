void main()
{
   int i,a,b,k,n[300];
   char str[10000];
   gets(str);
   a=strlen(str);
   n[0]=0;
   b=1;
   k=0;
   for(i=1;i<a;)
   {
	  if(str[i]==' ')
	  {   		 
		  if(b==1)n[b]=i-k;
		  else n[b]=i-k-1;
           if (n[b]!=0)printf("%d,",n[b]);
		  k=i;
		  b+=1;	  
	  }
	   i++;
   }
   if(b==1) n[b]=a-k;
   else n[b]=a-k-1;
   printf("%d\n",n[b]);
}
