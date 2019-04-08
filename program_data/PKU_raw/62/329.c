int main()
{
   int i,t,j,s;
   char a[210],b[210];
   gets(a);
   t=strlen(a);
   j=0;
   s=0;
   for(i=0;i<t;i++)
   {
       if(a[i]==' ')
	   {
	       if(j==0)
		   {
			   b[s]=a[i];
			   s++;
		       j++;
		   }		   
	   }
	   else
	   {
	       b[s]=a[i];
		   s++;
           j=0;
	   }
   }
   b[s]='\0';
   puts(b);
   return 0;
}